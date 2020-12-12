#include <boost/algorithm/string/replace.hpp>
#include <ilang/target-sc/ila_sim.h>

#include <ilang/ila/ast_fuse.h>
#include <ilang/util/log.h>

void IlaSim::create_tandem_check_s1() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_tandem.cc");
  std::stringstream tandem_check;
  tandem_check.str("");
  std::string indent = "";
  tandem_check << indent << "#include \"" << model_ptr_->name().str() << ".h\""
               << std::endl;
  create_check_state(tandem_check, indent);
  outFile << tandem_check.rdbuf();
  outFile.close();  
}

void IlaSim::create_rtl_wrapper_s1() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_rtl.h");
  std::stringstream rtl_wrapper;
  rtl_wrapper.str("");
  std::string indent = ""; 
  auto rtl_map = load_json(tandem_rtl_);
  auto includes = rtl_map["verilator_include"];
  for (nlohmann::json::iterator it = includes.begin(); it != includes.end(); ++it) 
    rtl_wrapper << indent << "#include <V" << it->get<std::string>() << ".h>" << std::endl;   
  create_v_in(rtl_wrapper, indent);
  create_verilated_class_s1(rtl_wrapper, indent);
  outFile << rtl_wrapper.rdbuf();
  outFile.close();    
}

void IlaSim::create_verilated_class_s1(std::stringstream& rtl_wrapper, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_name = rtl_map["VERILOG"].get<std::string>();  
  rtl_wrapper << indent << "class RTLVerilated {" << std::endl;
  rtl_wrapper << indent << "public:" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "V" << rtl_name << "* v_top;" << std::endl;
  rtl_wrapper << indent << "RTLVerilated() {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "v_top = new V" << rtl_name << "(\"v_top\");" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
  create_v_start_condition(rtl_wrapper, indent);
  create_v_input_s1(rtl_wrapper, indent);
  rtl_wrapper << indent << "~RTLVerilated() {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "delete v_top;" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
  create_rtl_next_cycle_s1(rtl_wrapper, indent);
  decrease_indent(indent);
  rtl_wrapper << indent << "};" << std::endl;  
}

void IlaSim::create_v_input_s1(std::stringstream& rtl_wrapper, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_inputs = rtl_map["verilog inputs"];
  rtl_wrapper << indent << "void v_input(v_in t_v) {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "if (start_condition(t_v)) {" << std::endl;
  increase_indent(indent);
  for (const auto& item : rtl_inputs.items()) {
    rtl_wrapper << indent << "v_top->" << item.key() << " = t_v." << item.key() << ";" << std::endl;
  }
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl; 
}

void IlaSim::create_rtl_next_cycle_s1(std::stringstream& rtl_wrapper, std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  std::string clk_signal = rtl_map["verilog clock"].get<std::string>();
  bool clk_edge = rtl_map["verilog clock edge"].get<bool>();
  rtl_wrapper << indent << "void next_cycle() {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "v_top->clk = " << ((clk_edge) ? 0 : 1) << ";" << std::endl;
  rtl_wrapper << indent << "v_top->eval();" << std::endl;
  rtl_wrapper << indent << "v_top->clk = " << ((clk_edge) ? 1 : 0)<< ";" << std::endl;
  rtl_wrapper << indent << "v_top->eval();" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
}