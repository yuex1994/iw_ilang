#include <boost/algorithm/string/replace.hpp>
#include <ilang/target-sc/ila_sim.h>

#include <ilang/ila/ast_fuse.h>
#include <ilang/util/log.h>

namespace ilang{

void IlaSim::create_check_state_header() {
  header_ << header_indent_ << "int tandem_f_ptr;" << std::endl;
  header_ << header_indent_ << model_ptr_->name().str() << "();" << std::endl;
  for (uint i = 0; i < model_ptr_->state_num(); i++) {
      header_ << header_indent_ << "void check_"
              << model_ptr_->state(i)->name().str() << "(" << kRTLSimType
              << "* v);" << std::endl;
  }
  header_ << header_indent_ << "void check_all_state(" << kRTLSimType << "* v);" << std::endl;
}

void IlaSim::create_check_state(std::stringstream& tandem_check, std::string& indent) {
  auto ref_var_map = load_json(tandem_ref_map_);
  auto state_map = ref_var_map["state mapping"];
  for (uint i = 0; i < model_ptr_->state_num(); i++) {
    auto state = model_ptr_->state(i);
    auto state_name = state->name().str();    
    if (GetUidSort(model_ptr_->state(i)->sort()) == AST_UID_SORT::MEM) {
      tandem_check << indent << "void " << model_ptr_->name().str()
                   << "::check_" << state_name << "(" << kRTLSimType << "* v) {}"
                   << std::endl;  
      continue;
    }
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

void IlaSim::create_ila_wrapper() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_ila.h");
  std::stringstream ila_wrapper;
  ila_wrapper.str("");
  std::string indent = "";  
  create_ilated_class(ila_wrapper, indent);
  outFile << ila_wrapper.rdbuf();
  outFile.close();  
}

void IlaSim::create_ilated_class(std::stringstream& ila_wrapper, std::string& indent) {
  ila_wrapper << indent << "#include \"" << model_ptr_->name().str() << ".h\"" << std::endl;
  create_i_in(ila_wrapper, indent);
  create_input_v_to_i(ila_wrapper, indent);  
  ila_wrapper << indent << "class Ilated {" << std::endl;
  ila_wrapper << indent << "public:" << std::endl;
  increase_indent(indent);
  ila_wrapper << indent << "Ilated() {" << std::endl;
  increase_indent(indent);
  ila_wrapper << indent << "i_top = new " << model_ptr_->name().str() << "();" << std::endl;
  decrease_indent(indent);
  ila_wrapper << indent << "}" << std::endl;
  create_i_input(ila_wrapper, indent);
  ila_wrapper << indent << "~Ilated() {" << std::endl;
  increase_indent(indent);
  ila_wrapper << indent << "delete i_top;" << std::endl;
  decrease_indent(indent);
  ila_wrapper << indent << "}" << std::endl;
  ila_wrapper << indent << model_ptr_->name().str() << "* i_top;" << std::endl;
  decrease_indent(indent);
  ila_wrapper << indent << "};" << std::endl;
}

void IlaSim::create_i_in(std::stringstream& ila_wrapper, std::string& indent) {
  ila_wrapper << indent << "class i_in {" << std::endl;
  ila_wrapper << indent << "public:" << std::endl;
  increase_indent(indent);
  for (int i = 0; i < model_ptr_->input_num(); i++) {
    auto input = model_ptr_->input(i);
    if (GetUidExpr(input) == AST_UID_SORT::BOOL)
      ila_wrapper << indent << "bool " << model_ptr_->name().str() << "_" << input->name().str() << ";" << std::endl;
    else
      ila_wrapper << indent << "uint" << input->sort()->bit_width() << "_t " << model_ptr_->name().str() << "_" << input->name().str() << ";" << std::endl; 
  }
  decrease_indent(indent);
  ila_wrapper << indent << "};" << std::endl;
}

void IlaSim::create_i_input(std::stringstream& ila_wrapper, std::string& indent) {
  ila_wrapper << indent << "void i_input (i_in t_i) {" << std::endl;
  increase_indent(indent);
  for (int i = 0; i < model_ptr_->input_num(); i++) {
    auto input = model_ptr_->input(i);
    ila_wrapper << indent << "i_top->" << model_ptr_->name().str() << "_" << input->name().str() << " = t_i." << model_ptr_->name().str() << "_" << input->name().str() << ";" << std::endl; 
  }
  decrease_indent(indent);
  ila_wrapper << indent << "}" << std::endl;
}

void IlaSim::create_input_v_to_i(std::stringstream& ila_wrapper, std::string& indent) {
  auto ref_var_map = load_json(tandem_ref_map_);
  auto interface_map = ref_var_map["interface mapping"];
  ila_wrapper << indent << "i_in input_v_to_i(v_in& test_v) {" << std::endl;
  increase_indent(indent);
  ila_wrapper << indent << "i_in test_i;" << std::endl;
  for (const auto& item : interface_map.items()) {
    if (item.value().is_string()) {
      if (item.value().get<std::string>().find("**") == std::string::npos) {
        ila_wrapper << indent << "test_i." << model_ptr_->name().str() << "_" << item.value().get<std::string>() << " = " << "test_v." << item.key() << ";" << std::endl;
      }
    } else if (item.value().is_array()) {
      auto arr = item.value().get<std::vector<std::string>>();
      if (arr[0].find("**") == std::string::npos) {
        for (int i = 0; i < (arr.size() - 1); i+=2) {
          ila_wrapper << indent << "if (test_v." << item.key() << " == " << arr[i + 1] << ")" << std::endl;
          increase_indent(indent);
          ila_wrapper << indent << "test_i." << model_ptr_->name().str() << "_" << arr[0] << " = " << arr[i + 2] << ";" << std::endl;
          decrease_indent(indent);
        }
      }
    }
  }
  ila_wrapper << indent << "return test_i;" << std::endl;
  decrease_indent(indent);
  ila_wrapper << indent << "}" << std::endl;
}

void IlaSim::create_rtl_wrapper() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_rtl.h");
  std::stringstream rtl_wrapper;
  rtl_wrapper.str("");
  std::string indent = "";  
  create_verilated_class(rtl_wrapper, indent);
  outFile << rtl_wrapper.rdbuf();
  outFile.close();    
}

void IlaSim::create_verilated_class(std::stringstream& rtl_wrapper, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_name = rtl_map["VERILOG"].get<std::string>();
  auto includes = rtl_map["verilator_include"];
  for (nlohmann::json::iterator it = includes.begin(); it != includes.end(); ++it) 
    rtl_wrapper << indent << "#include <V" << it->get<std::string>() << ".h>" << std::endl;
  create_v_in(rtl_wrapper, indent);
  rtl_wrapper << indent << "class RTLVerilated {" << std::endl;
  rtl_wrapper << indent << "public:" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "V" << rtl_name << "*v_top;" << std::endl;
  rtl_wrapper << indent << "RTLVerilated() {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "v_top = new V" << rtl_name << "(\"v_top\");" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
  create_v_input(rtl_wrapper, indent);
  rtl_wrapper << indent << " ~RTLVerilated() {}" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "};" << std::endl;  
}

void IlaSim::create_v_in(std::stringstream& rtl_wrapper, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_inputs = rtl_map["verilog inputs"];
  rtl_wrapper << indent << "class v_in {" << std::endl;
  rtl_wrapper << indent << "public:" << std::endl;
  increase_indent(indent);
  for (const auto& item : rtl_inputs.items()) {
    if (item.value() == 1) {
      rtl_wrapper << indent << "bool " << item.key() << ";" << std::endl;
    } else {
      rtl_wrapper << indent << "uint" << item.value() << "_t " << item.key() << ";" << std::endl;
    }
  }
  decrease_indent(indent);
  rtl_wrapper << indent << "};" << std::endl; 
}

void IlaSim::create_v_input(std::stringstream& rtl_wrapper, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_inputs = rtl_map["verilog inputs"];
  rtl_wrapper << indent << "void v_input(v_in t_v) {" << std::endl;
  increase_indent(indent);
  for (const auto& item : rtl_inputs.items()) {
    rtl_wrapper << indent << "v_top->" << item.key() << " = t_v." << item.key() << ";" << std::endl;
  }
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl; 
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
  tandem_constructor << indent << model_ptr_->name().str() << "::" << model_ptr_->name().str() << "() {" << std::endl;
  increase_indent(indent);
  for (uint i = 0; i < model_ptr_->instr_num(); i++) {
    tandem_constructor << indent << "tandem_f[" << i << "] = &" << model_ptr_->name().str() << "::tandem_instr_" << model_ptr_->instr(i)->name().str() << ";" << std::endl;
  }
  decrease_indent(indent);
  tandem_constructor << "}" << std::endl;  
  outFile << tandem_constructor.rdbuf();
  outFile.close();
}

}