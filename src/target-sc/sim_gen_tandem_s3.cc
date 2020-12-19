#include <boost/algorithm/string/replace.hpp>
#include <ilang/target-sc/ila_sim.h>

#include <ilang/ila/ast_fuse.h>
#include <ilang/util/log.h>

namespace ilang { 

void IlaSim::sim_gen_tandem_s3() {
  tandem_rtl_ = "../refinement/rtl_tmp.json";
  aux_pc_enable_ = true;
  header_ << header_indent_ << "uint32_t " << model_ptr_->name().str() << "_pc;" << std::endl;
  header_ << header_indent_ << model_ptr_->name().str() << "(uint32_t mode);" << std::endl;
  header_ << header_indent_ << "uint32_t checkpoint_mode;" << std::endl;
  header_ << header_indent_ << "uint32_t checkpoint_period;" << std::endl;
  header_ << header_indent_ << "uint32_t instr_ctr;" << std::endl;
  header_ << header_indent_ << "uint32_t* checkpoint_seq;" << std::endl;    
  header_ << header_indent_ << "uint32_t checkpoint_ptr;" << std::endl; 
  header_ << header_indent_ << "bool checkpoint_condition();" << std::endl;
  create_tandem_check_s3();
  create_ila_wrapper_s3();
  create_rtl_wrapper_s2(); 
  create_model_checkpoint_cc(); 
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
  tandem_check << indent << "default: break;" << std::endl;
  decrease_indent(indent);
  tandem_check << "}" << std::endl;
  decrease_indent(indent);
  tandem_check << "}" << std::endl;
}

void IlaSim::create_ila_wrapper_s3() {
  create_ila_wrapper_s3_h();
  create_ila_wrapper_s3_cc();
}

void IlaSim::create_ila_wrapper_s3_h() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_ila.h");
  std::stringstream ila_wrapper_header;
  ila_wrapper_header.str("");
  std::string indent = "";  
  create_ilated_class_header_s3(ila_wrapper_header, indent);
  outFile << ila_wrapper_header.rdbuf();
  outFile.close();  
}

void IlaSim::create_ila_wrapper_s3_cc() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_ila.cc");
  std::stringstream ila_wrapper_src;
  ila_wrapper_src.str("");
  std::string indent = "";  
  create_ilated_class_s3(ila_wrapper_src, indent);
  outFile << ila_wrapper_src.rdbuf();
  outFile.close();  
}

void IlaSim::create_ilated_class_header_s3(std::stringstream& ila_wrapper, std::string& indent) {
  ila_wrapper << indent << "#include<" << model_ptr_->name().str() << ".h>" << std::endl;
  create_i_in(ila_wrapper, indent);
  ila_wrapper << indent << "class v_in;" << std::endl;
  ila_wrapper << indent << "i_in input_v_to_i(v_in& test_v);" << std::endl;
  ila_wrapper << indent << "class RTLVerilated;" << std::endl;
  ila_wrapper << indent << "class Ilated {" << std::endl;
  ila_wrapper << indent << "public:" << std::endl;
  increase_indent(indent);
  ila_wrapper << indent << "Ilated(uint32_t mode);" << std::endl;
  ila_wrapper << indent << "void i_input(i_in t_i);" << std::endl;
  ila_wrapper << indent << "void v_input(v_in t_v);" << std::endl;
  ila_wrapper << indent << "~Ilated();" << std::endl;
  ila_wrapper << indent << "void next_instr(RTLVerilated* v);" << std::endl;
  ila_wrapper << indent << model_ptr_->name().str() << "* i_top;" << std::endl;
  decrease_indent(indent);
  ila_wrapper << indent << "};" << std::endl;
}

void IlaSim::create_ilated_class_s3(std::stringstream& ila_wrapper, std::string& indent) {
  ila_wrapper << indent << "#include \"" << model_ptr_->name().str() << "_ila.h\"" << std::endl;
  // create_i_in(ila_wrapper, indent);
  create_input_v_to_i(ila_wrapper, indent);  
  ila_wrapper << indent << "Ilated::Ilated(uint32_t mode) {" << std::endl;
  increase_indent(indent);
  ila_wrapper << indent << "i_top = new " << model_ptr_->name().str() << "(mode);" << std::endl;
  decrease_indent(indent);
  ila_wrapper << indent << "}" << std::endl;
  create_i_input(ila_wrapper, indent);
  ila_wrapper << indent << "Ilated::~Ilated() {" << std::endl;
  increase_indent(indent);
  ila_wrapper << indent << "delete i_top;" << std::endl;
  decrease_indent(indent);
  ila_wrapper << indent << "}" << std::endl;
  create_ila_next_instr(ila_wrapper, indent);
}

}