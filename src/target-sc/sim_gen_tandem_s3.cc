#include <boost/algorithm/string/replace.hpp>
#include <ilang/target-sc/ila_sim.h>

#include <ilang/ila/ast_fuse.h>
#include <ilang/util/log.h>

namespace ilang { 

void IlaSim::sim_gen_tandem_s3() {
  tandem_rtl_ = "../refinement/rtl_tmp.json";
  aux_pc_enable_ = true;
  header_ << header_indent_ << "uint32_t " << model_ptr_->name().str() << "_pc;" << std::endl;
  header_ << header_indent_ << "uint32_t checkpoint_period;" << std::endl;
  header_ << header_indent_ << "uint32_t instr_ctr;" << std::endl;
  header_ << header_indent_ << "uint32_t* checkpoint_seq;" << std::endl;    
  header_ << header_indent_ << "uint32_t checkpoint_ptr;" << std::endl; 
  header_ << header_indent_ << "bool checkpoint_condition();" << std::endl;
  std::cout << "yxdbg1" << std::endl;
  create_tandem_check_s3();
  std::cout << "yxdbg2" << std::endl;
  create_ila_wrapper();
  std::cout << "yxdbg3" << std::endl;
  create_rtl_wrapper_s2(); 
  std::cout << "yxdbg4" << std::endl;
  create_model_checkpoint_cc(); 
  std::cout << "yxdbg5" << std::endl;
}

void IlaSim::create_tandem_check_s3() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_tandem.cc");
  std::stringstream tandem_check;
  tandem_check.str("");
  std::string indent = "";
  tandem_check << indent << "#include \"" << model_ptr_->name().str() << ".h\""
               << std::endl;
  create_check_state(tandem_check, indent);
  create_tandem_checkpoint(tandem_check, indent);
  outFile << tandem_check.rdbuf();
  outFile.close();  
}

void IlaSim::create_tandem_checkpoint(std::stringstream& tandem_check, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_name = rtl_map["checkpoint"];
  header_ << header_indent_ << "void tandem_checkpoint(" << kRTLSimType << "* v);" << std::endl; 
  tandem_check << indent << "void " << model_ptr_->name().str() << "::tandem_checkpoint(" << kRTLSimType << "* v) {" << std::endl;
  increase_indent(indent);
  tandem_check << indent << "instr_ctr++;" << std::endl;
  tandem_check << indent << "switch (checkpoint_mode) {" << std::endl;
  increase_indent(indent);
  tandem_check << indent << "case 1:" << std::endl;
  increase_indent(indent);
  tandem_check << indent << "if (instr_ctr % checkpoint_period == 0) { check_all_state(v); }" << std::endl;
  tandem_check << indent << "break;" << std::endl;
  decrease_indent(indent);
  tandem_check << indent << "case 2:" << std::endl;
  increase_indent(indent);
  tandem_check << indent << "if (instr_ctr == checkpoint_seq[checkpoint_ptr]) { check_all_state(v); checkpoint_ptr++; }" << std::endl;
  tandem_check << indent << "break;" << std::endl;
  decrease_indent(indent);  
  tandem_check << indent << "case 3:" << std::endl;
  increase_indent(indent);
  tandem_check << indent << "if (checkpoint_condition()) { check_all_state(v); }" << std::endl;
  tandem_check << indent << "break;" << std::endl;
  decrease_indent(indent);    
  increase_indent(indent);
  tandem_check << indent << "default: break;" << std::endl;
  decrease_indent(indent);
  decrease_indent(indent);
  tandem_check << "}" << std::endl;
  decrease_indent(indent);
  tandem_check << "}" << std::endl;
}

  
}