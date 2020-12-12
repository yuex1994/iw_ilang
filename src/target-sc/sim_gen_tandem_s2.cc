#include <boost/algorithm/string/replace.hpp>
#include <ilang/target-sc/ila_sim.h>

#include <ilang/ila/ast_fuse.h>
#include <ilang/util/log.h>

namespace ilang{

void IlaSim::sim_gen_tandem_s2() {
  tandem_rtl_ = "../refinement/rtl_tmp.json";
  create_tandem_check_s2();
  create_ila_wrapper();  
  create_rtl_wrapper_s2();
  create_tandem_constructor();
}

void IlaSim::create_tandem_check_s2() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_tandem.cc");
  std::stringstream tandem_check;
  tandem_check.str("");
  std::string indent = "";
  tandem_check << indent << "#include \"" << model_ptr_->name().str() << ".h\""
               << std::endl;
  create_check_state(tandem_check, indent);
  create_check_instr_header();
  create_check_instr(tandem_check, indent);
  outFile << tandem_check.rdbuf();
  outFile.close();  
}

void IlaSim::create_rtl_wrapper_s2() {
  create_rtl_wrapper_h_s2();
  create_rtl_wrapper_cc_s2();
}

void IlaSim::create_rtl_wrapper_h_s2() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_rtl.h");
  std::stringstream rtl_wrapper;
  rtl_wrapper.str("");
  std::string indent = "";  
  rtl_wrapper << indent << "#include <list>" << std::endl;

  create_rtl_wrapper_def(rtl_wrapper, indent);
  create_rtl_in(rtl_wrapper, indent);    
  create_instr_monitor_class_header(rtl_wrapper, indent);
  rtl_wrapper << indent << "InstrMonitor* gen_monitor(v_in& t_v);" << std::endl;
  create_rtl_class_header_s2(rtl_wrapper, indent);
  outFile << rtl_wrapper.rdbuf();
  outFile.close();       
}

void IlaSim::create_rtl_wrapper_def(std::stringstream& rtl_wrapper, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto includes = rtl_map["verilator_include"];
  for (nlohmann::json::iterator it = includes.begin(); it != includes.end(); ++it) 
    rtl_wrapper << indent << "#include <V" << it->get<std::string>() << ".h>" << std::endl;   
  rtl_wrapper << indent << "class Ilated;" << std::endl;    
  rtl_wrapper << indent << "class RTLVerilated;" << std::endl;    
}

void IlaSim::create_rtl_class_header_s2(std::stringstream& rtl_wrapper, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_name = rtl_map["VERILOG"].get<std::string>();    
  rtl_wrapper << indent << "class RTLVerilated {" << std::endl;
  rtl_wrapper << indent << "public:" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "V" << rtl_name << "*v_top;" << std::endl;
  rtl_wrapper << indent << "Ilated* i;" << std::endl;
  rtl_wrapper << indent << "std::list<InstrMonitor*> i_m_list;" << std::endl;
  rtl_wrapper << indent << "RTLVerilated(Ilated* ilated);" << std::endl;
  rtl_wrapper << indent << "bool start_condition(v_in t_v);" << std::endl;  
  rtl_wrapper << indent << "void v_input(v_in t_v);" << std::endl;
  rtl_wrapper << indent << " ~RTLVerilated();" << std::endl;
  rtl_wrapper << indent << "void next_cycle();" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "};" << std::endl;    
}

void IlaSim::create_rtl_wrapper_cc_s2() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_rtl.cc");
  std::stringstream rtl_wrapper_cc;
  rtl_wrapper_cc << "#include \"" << model_ptr_->name().str() << "_ila.h\"" << std::endl;  
  create_instr_monitor_class(rtl_wrapper_cc, indent);
  create_instr_monitor_instance(rtl_wrapper_cc, indent);  
  create_rtl_class_s2(rtl_wrapper_cc, indent);
  outFile << rtl_wrapper_cc.rdbuf();
  outFile.close();    
}

void IlaSim::create_rtl_class_s2(std::stringstream& rtl_wrapper, std::string& indent) {  
  bool av_check_at_cycle_end = true;

  create_rtl_constructor(rtl_wrapper, indent);
  create_start_condition(rtl_wrapper, indent);
  create_rtl_input_with_monitor(rtl_wrapper, indent);
  create_rtl_destructor(rtl_wrapper, indent);
  create_rtl_next_cycle(rtl_wrapper, indent, av_check_at_cycle_end);
}



}