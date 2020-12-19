#include <boost/algorithm/string/replace.hpp>
#include <ilang/target-sc/ila_sim.h>

#include <ilang/ila/ast_fuse.h>
#include <ilang/util/log.h>

namespace ilang { 
// TODO(yuex): include header.
void IlaSim::sim_gen_tandem_s4() {
  tandem_rtl_ = "../refinement/rtl_tmp.json";
  aux_pc_enable_ = true;
  header_ << header_indent_ << "uint32_t " << model_ptr_->name().str() << "_pc;" << std::endl;
  header_ << header_indent_ << model_ptr_->name().str() << "();" << std::endl;
  header_ << header_indent_ << "tandem_swap(" << kRTLSimType << " *v);" << std::endl; 
  create_tandem_check_s4();
  create_ila_wrapper();  
  create_rtl_wrapper_s1();
  create_model_default_cc();
}

void IlaSim::create_tandem_check_s4() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_tandem.cc");
  std::stringstream tandem_swap;
  tandem_check.str("");
  std::string indent = "";
  tandem_swap << indent << "#include \"" << model_ptr_->name().str() << ".h\""<< std::endl;
  create_tandem_swap(tandem_swap, indent);
  outFile << tandem_swap.rdbuf();
  outFile.close();      
}

void IlaSim::create_swap_state(std::stringstream& tandem_swap, std::string& indent) {
  auto ref_var_map = load_json(tandem_ref_map_);
  auto state_map = ref_var_map["state mapping"];
  for (uint i = 0; i < model_ptr_->state_num(); i++) {
    auto state = model_ptr_->state(i);
    auto state_name = state->name().str();    
    try {
      auto v_name = state_map.at(state_name);
      if (GetUidSort(model_ptr_->state(i)->sort()) == AST_UID_SORT::MEM) {
        auto addr_width = state->sort()->addr_width();
        uint32_t mem_size = 1 << addr_width;
        tandem_swap << indent << "for (int i = 0; i < " << mem_size << "; i++) {" << std::endl;
        increase_indent(indent);
        tandem_swap << indent << "v->v_top->" << boost::replace_all_copy(boost::replace_all_copy(v_name.dump(), ".", "->"), "\"", "") << "[i] = " << model_ptr_->name().str() << state_name << "[i];" << std::endl;
        decrease_indent(indent); 
        tandem_swap << "}" << std::endl;
      } else if ((GetUidSort(state->sort()) == AST_UID_SORT::BOOL)) {
        tandem_swap << indent << "v->v_top->" << boost::replace_all_copy(boost::replace_all_copy(v_name.dump(), ".", "->"), "\"", "") << " = " << model_ptr_->name().str() << state_name << ";" << std::endl;
      } else if (state->sort()->bit_width() <= 64) {
        tandem_swap << indent << "v->v_top->" << boost::replace_all_copy(boost::replace_all_copy(v_name.dump(), ".", "->"), "\"", "") << " = " << model_ptr_->name().str() << state_name << ";" << std::endl;
      } else {
        for (int j = 0; j < state->sort()->bit_width() / 32 + ((state->sort()->bit_width() % 32 == 0)? 0:1); j++) {
          tandem_swap << indent << "v->v_top->" << boost::replace_all_copy(boost::replace_all_copy(v_name.dump(), ".", "->"), "\"", "") << "[" << j << "] = (uint32_t) (" << model_ptr_->name().str() << state_name << " >> " << 32 * j << ") % (1ll << 32);" << std::endl;
        }
      }
    } catch (nlohmann::detail::out_of_range& e)
    {
      std::cout << "out of range: " << e.what() << '\n';
      continue;
    }
  }  
}

void IlaSim::create_tandem_swap(std::stringstream& tandem_swap, std::string& indent) {
  tandem_swap << indent << "void " << model_ptr_->name().str() << "::tandem_swap(" << kRTLSimType << " *v) {" << std::endl;
  increase_indent(indent);
  create_swap_state(tandem_swap, indent);
  decrease_indent(indent);
  tandem_swap << indent << "}" << std::endl;
}

}