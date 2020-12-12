#include <boost/algorithm/string/replace.hpp>
#include <ilang/target-sc/ila_sim.h>

#include <ilang/ila/ast_fuse.h>
#include <ilang/util/log.h>

namespace ilang{

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
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_rtl.h");
  std::stringstream rtl_wrapper;
  rtl_wrapper.str("");
  std::string indent = "";  
  rtl_wrapper << indent << "#include <list>" << std::endl;
  auto rtl_map = load_json(tandem_rtl_);
  auto includes = rtl_map["verilator_include"];
  for (nlohmann::json::iterator it = includes.begin(); it != includes.end(); ++it) 
    rtl_wrapper << indent << "#include <V" << it->get<std::string>() << ".h>" << std::endl;  
  rtl_wrapper << indent << "class Ilated;" << std::endl;    
  rtl_wrapper << indent << "class RTLVerilated;" << std::endl;    
  create_v_in(rtl_wrapper, indent);    
  create_instr_monitor_class_header(rtl_wrapper, indent);
  rtl_wrapper << indent << "InstrMonitor* gen_monitor(v_in& t_v);" << std::endl;
  create_verilated_class_header_s2(rtl_wrapper, indent);
  outFile << rtl_wrapper.rdbuf();
  outFile.close();    

  std::ofstream outFile_src;
  outFile_src.open(export_dir_ + model_ptr_->name().str() + "_rtl.cc");
  std::stringstream rtl_wrapper_src;
  rtl_wrapper_src << "#include \"" << model_ptr_->name().str() << "_ila.h\"" << std::endl;  
  create_instr_monitor_class(rtl_wrapper_src, indent);
  create_instr_monitor_instance(rtl_wrapper_src, indent);  
  create_verilated_class_s2(rtl_wrapper_src, indent);
  outFile_src << rtl_wrapper_src.rdbuf();
  outFile_src.close();
}

void IlaSim::create_verilated_class_s2(std::stringstream& rtl_wrapper, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_name = rtl_map["VERILOG"].get<std::string>();    

  rtl_wrapper << indent << "RTLVerilated::RTLVerilated(Ilated* ilated) {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "v_top = new V" << rtl_name << "(\"v_top\");" << std::endl;
  rtl_wrapper << indent << "i = ilated;" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
  create_v_start_condition(rtl_wrapper, indent);
  create_v_input_s2(rtl_wrapper, indent);
  rtl_wrapper << indent << " RTLVerilated::~RTLVerilated() {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "delete v_top;" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
  create_rtl_next_cycle_s2(rtl_wrapper, indent);
}

void IlaSim::create_v_input_s2(std::stringstream& rtl_wrapper, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_inputs = rtl_map["verilog inputs"];
  rtl_wrapper << indent << "void RTLVerilated::v_input(v_in t_v) {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "if (start_condition(t_v)) {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "InstrMonitor* i_m = gen_monitor(t_v);" << std::endl;
  rtl_wrapper << indent << "i_m_list.push_back(i_m);" << std::endl;
  for (const auto& item : rtl_inputs.items()) {
    rtl_wrapper << indent << "v_top->" << item.key() << " = t_v." << item.key() << ";" << std::endl;
  }
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl; 
}

void IlaSim::create_rtl_next_cycle_s2(std::stringstream& rtl_wrapper, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  std::string clk_signal = rtl_map["verilog clock"].get<std::string>();
  bool clk_edge = rtl_map["verilog clock edge"].get<bool>();
  rtl_wrapper << indent << "void RTLVerilated::next_cycle() {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "v_top->clk = " << ((clk_edge) ? 0 : 1) << ";" << std::endl;
  rtl_wrapper << indent << "v_top->eval();" << std::endl;
  rtl_wrapper << indent << "v_top->clk = " << ((clk_edge) ? 1 : 0)<< ";" << std::endl;
  rtl_wrapper << indent << "v_top->eval();" << std::endl;
  rtl_wrapper << indent << "for (auto i_m : i_m_list)" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "i_m->pass_cycle();" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "if (i_m_list.size() == 0)" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "  return;" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "if (i_m_list.front()->is_finish(this)) {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "v_in t_v = i_m_list.front()->t_v_;" << std::endl;
  rtl_wrapper << indent << "i_m_list.pop_front();" << std::endl;
  rtl_wrapper << indent << "i->v_input(t_v);" << std::endl;
  rtl_wrapper << indent << "i->next_instr(this);" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
}

}