#include <boost/algorithm/string/replace.hpp>
#include <ilang/target-sc/ila_sim.h>

#include <ilang/ila/ast_fuse.h>
#include <ilang/util/log.h>

namespace ilang{

void IlaSim::create_check_state_header() {
  header_ << header_indent_ << "int tandem_f_ptr;" << std::endl;
  header_ << header_indent_ << model_ptr_->name().str() << "();" << std::endl;
  for (uint i = 0; i < model_ptr_->state_num(); i++) {
    if (GetUidSort(model_ptr_->state(i)->sort()) != AST_UID_SORT::MEM) {
      header_ << header_indent_ << "void check_"
              << model_ptr_->state(i)->name().str() << "(" << kRTLSimType
              << "* v);" << std::endl;
    }
  }
  header_ << header_indent_ << "void check_all_state(" << kRTLSimType << "* v);" << std::endl;
}

void IlaSim::create_check_state(std::stringstream& tandem_check, std::string& indent) {

  auto ref_var_map = load_json(tandem_ref_map_);
  auto state_map = ref_var_map["state mapping"];
  for (uint i = 0; i < model_ptr_->state_num(); i++) {
    if (GetUidSort(model_ptr_->state(i)->sort()) == AST_UID_SORT::MEM) {
      tandem_check << indent << "void " << model_ptr_->name().str()
                   << "::check_" << state_name << "(" << kRTLSimType << "* v) {}"
                   << std::endl;  
      continue;
    }      
    auto state = model_ptr_->state(i);
    auto state_name = state->name().str();
    try {
      auto v_name = state_map.at(state_name);      
      // checked_states.insert(state);
      tandem_check << indent << "void " << model_ptr_->name().str()
                   << "::check_" << state_name << "(" << kRTLSimType << "* v) {"
                   << std::endl;
      increase_indent(indent);
      if ((GetUidSort(state->sort()) == AST_UID_SORT::BOOL)) {
        tandem_check << indent << "if (" << model_ptr_->name().str() << "_"
                     << state_name << " != "
                     << "v->v_top->"
                     << boost::replace_all_copy(boost::replace_all_copy(v_name.dump(), ".", "->"), "\"", "") << ")"
                     << std::endl;
        tandem_check << indent << "  "
                     << "throw " << model_ptr_->name().str() << "Exception(\""
                     << state_name << " unequal.\");" << std::endl;

      } else if (state->sort()->bit_width() <= 64) {
        tandem_check << indent << "if (" << model_ptr_->name().str() << "_"
                     << state_name << " != "
                     << "v->v_top->"
                     << boost::replace_all_copy(boost::replace_all_copy(v_name.dump(), ".", "->"), "\"", "") << ")"
                     << std::endl;
        tandem_check << indent << "  "
                     << "throw " << model_ptr_->name().str() << "Exception(\""
                     << state_name << " unequal.\");" << std::endl;
      } else {
        for (int j = 0; j < state->sort()->bit_width() / 32 + ((state->sort()->bit_width() % 32 == 0)? 0:1); j++) {
          tandem_check << indent << "if ((" << model_ptr_->name().str() << "_"
                       << state_name << " >> " << 32 * j
                       << ") % (1ll << 32) != "
                       << "v->v_top->"
                       << boost::replace_all_copy(boost::replace_all_copy(v_name.dump(), ".", "->"), "\"", "") << "[" << j
                       << "])" << std::endl;
          tandem_check << indent << "  "
                       << "throw " << model_ptr_->name().str() << "Exception(\""
                       << state_name << " unequal.\");" << std::endl;
        }
      }
      decrease_indent(indent);
    } catch (nlohmann::detail::out_of_range& e)
    {
      std::cout << "out of range: " << e.what() << '\n';
      continue;
    }
    tandem_check << indent << "}" << std::endl;
  }


}

void IlaSim::create_check_instr_header() {
  for (uint i = 0; i < model_ptr_->instr_num(); i++) {
    header_ << header_indent_ << "void tandem_instr_"
            << model_ptr_->instr(i)->name().str() << "(" << kRTLSimType
            << "* v);" << std::endl;
  }
  header_ << header_indent_ << "typedef void (" << model_ptr_->name().str()
          << "::*tandem_f_type)(" << kRTLSimType << "*);" << std::endl;
  header_ << header_indent_ << "tandem_f_type tandem_f["
          << model_ptr_->instr_num() + 1 << "];" << std::endl;
}

void IlaSim::create_check_instr(std::stringstream& tandem_check, std::string& indent) {
  for (uint i = 0; i < model_ptr_->instr_num(); i++) {
    auto instr = model_ptr_->instr(i);
    tandem_check << indent << "void " << model_ptr_->name().str() << "::tandem_instr_"
                 << instr->name().str() << "(" << kRTLSimType << "* v) {" << std::endl;
    increase_indent(indent);
    for (auto updated_state_name : instr->updated_states()) {
      auto update_expr = instr->update(updated_state_name);
      auto updated_state = model_ptr_->state(updated_state_name);
      tandem_check << indent << "check_" << updated_state_name << "(v);" << std::endl;
    }
    decrease_indent(indent);
    tandem_check << indent << "}" << std::endl;
  }  
}

void IlaSim::create_tandem_check_s1() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_tandem.cc");
  std::stringstream tandem_check;
  tandem_check.str("");
  std::string indent = "";
  tandem_check << indent << "#include \"" << model_ptr_->name().str() << ".h\""
               << std::endl;
  create_check_state_header();
  create_check_state(tandem_check, indent);
  outFile << tandem_check.rdbuf();
  outFile.close();  
}

void IlaSim::create_tandem_check_s2() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_tandem.cc");
  std::stringstream tandem_check;
  tandem_check.str("");
  std::string indent = "";
  tandem_check << indent << "#include \"" << model_ptr_->name().str() << ".h\""
               << std::endl;

  outFile << tandem_check.rdbuf();
  outFile.close();
}

nlohmann::json IlaSim::load_json(std::string file_name) {
  std::ifstream fin(file_name);
  if (!fin.is_open()) {
    ILA_ERROR << "Cannot read from file:" << file_name;
    exit(1);
  }
  nlohmann::json j;
  fin >> j;
  return j;
}

void IlaSim::create_tandem_constructor() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + ".cc");
  std::stringstream tandem_constructor;
  std::string indent = "";
  tandem_constructor << indent << "#include \"" << model_ptr_->name().str() << ".h\"" << std::endl;
  tandem_constructor << indent << "#ifdef " << kTandemMacro << std::endl;
  tandem_constructor << indent << model_ptr_->name().str() << "::" << model_ptr_->name().str() << "() {" << std::endl;
  increase_indent(indent);
  for (uint i = 0; i < model_ptr_->instr_num(); i++) {
    tandem_constructor << indent << "tandem_f[" << i << "] = &" << model_ptr_->name().str() << "::tandem_instr_" << model_ptr_->instr(i)->name().str() << ";" << std::endl;
  }
  decrease_indent(indent);
  tandem_constructor << "}" << std::endl;
  tandem_constructor << "#endif" << std::endl;   
  outFile << tandem_constructor.rdbuf();
  outFile.close();
}

}