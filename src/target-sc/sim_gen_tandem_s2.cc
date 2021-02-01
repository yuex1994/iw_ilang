#include <boost/algorithm/string/replace.hpp>
#include <ilang/target-sc/ila_sim.h>

#include <ilang/ila/ast_fuse.h>
#include <ilang/util/log.h>

namespace ilang {

void IlaSim::sim_gen_tandem_s2() {
  tandem_rtl_ = "../refinement/rtl_tmp.json";
  header_ << header_indent_ << model_ptr_->name().str() << "();" << std::endl;
  header_ << header_indent_ << "int tandem_f_ptr;" << std::endl;
  create_tandem_check_s2();
  create_ila_wrapper();
  create_rtl_wrapper_s2();
  create_model_tandem_cc();
  create_tandem_cmake();
}

void IlaSim::create_tandem_check_s2() {
  std::ofstream outFile;
  outFile.open(export_top_dir_ + "src/tandem/" + model_ptr_->name().str() +
               "_tandem.cc");
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
  outFile.open(export_top_dir_ + "include/" + model_ptr_->name().str() +
               "_rtl_monitor.h");
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

void IlaSim::create_rtl_class_header_s2(std::stringstream& rtl_wrapper,
                                        std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_name = rtl_map["VERILOG"].get<std::string>();
  rtl_wrapper << indent << "class " << kRTLSimType << " {" << std::endl;
  rtl_wrapper << indent << "public:" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "V" << rtl_name << "*v_top;" << std::endl;
  rtl_wrapper << indent << "Ilated* i;" << std::endl;
  rtl_wrapper << indent << "std::list<InstrMonitor*> i_m_list;" << std::endl;
  rtl_wrapper << indent << "" << kRTLSimType << "();" << std::endl;
  rtl_wrapper << indent << "" << kRTLSimType << "(Ilated* ilated);" << std::endl;
  rtl_wrapper << indent << "bool start_condition(v_in t_v);" << std::endl;
  rtl_wrapper << indent << "void v_input(v_in t_v);" << std::endl;
  rtl_wrapper << indent << "void register_ilated(Ilated* i);" << std::endl;
  rtl_wrapper << indent << " ~" << kRTLSimType << "();" << std::endl;
  rtl_wrapper << indent << "void next_cycle();" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "};" << std::endl;
}

void IlaSim::create_rtl_wrapper_cc_s2() {
  std::ofstream outFile;
  outFile.open(export_top_dir_ + "src/tandem/" + model_ptr_->name().str() +
               "_rtl_monitor.cc");
  std::stringstream rtl_wrapper_cc;
  rtl_wrapper_cc.str("");
  std::string indent = "";
  rtl_wrapper_cc << "#include \"" << model_ptr_->name().str() << "_ila_top.h\""
                 << std::endl << std::endl << std::endl;
  create_instr_monitor_class(rtl_wrapper_cc, indent);
  create_instr_monitor_instance(rtl_wrapper_cc, indent);
  create_rtl_class_s2(rtl_wrapper_cc, indent);
  outFile << rtl_wrapper_cc.rdbuf();
  outFile.close();
}

void IlaSim::create_rtl_class_s2(std::stringstream& rtl_wrapper,
                                 std::string& indent) {
  bool av_check_at_cycle_end = true;

  create_rtl_constructor(rtl_wrapper, indent);
  create_start_condition(rtl_wrapper, indent);
  create_rtl_input_with_monitor(rtl_wrapper, indent);
  create_rtl_destructor(rtl_wrapper, indent);
  create_rtl_next_cycle(rtl_wrapper, indent, av_check_at_cycle_end);
  create_s2_rtl_constructor(rtl_wrapper, indent);
}

void IlaSim::create_s2_rtl_constructor(std::stringstream& rtl_wrapper,
                                       std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_name = rtl_map["VERILOG"].get<std::string>();
  rtl_wrapper << indent << "" << kRTLSimType << "::" << kRTLSimType << "() {"
              << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "v_top = new V" << rtl_name << "(\"v_top\");"
              << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl << std::endl;

  rtl_wrapper << indent << "void " << kRTLSimType << "::register_ilated(Ilated* i) {" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "i = ilated;" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl << std::endl;
}

void IlaSim::create_tandem_cmake() {
  std::ofstream outFile;
  outFile.open(export_top_dir_ + "CMakeLists.txt");
  std::stringstream cmake_info;
  std::string proj_name = "tandem_" + model_ptr_->name().str();
  std::string cxx_flags = "-O3";
  std::string library_name = model_ptr_->name().str() + "_src";
  std::string tandem_name = "tandem-" + model_ptr_->name().str() + "-exe";

  cmake_info << "cmake_minimum_required(VERSION 3.8)" << std::endl;
  cmake_info << "project(" + proj_name << ")" << std::endl;
  cmake_info << "set(CMAKE_CXX_FLAGS " << cxx_flags << ")" << std::endl;
  cmake_info << "set(CMAKE_BUILD_TYPE Debug)" << std::endl;

  cmake_info << "find_package(verilator)" << std::endl << std::endl;

  cmake_info
      << "AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/src/ilated/ TANDEM_SRC)"
      << std::endl;
  cmake_info
      << "AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/src/tandem/ TANDEM_SRC)"
      << std::endl;
  cmake_info << "add_library(" << library_name << " ${TANDEM_SRC})" << std::endl
             << std::endl;

  cmake_info << "target_include_directories(" << library_name
             << " PUBLIC ${PROJECT_SOURCE_DIR}/include)" << std::endl
             << std::endl;

  cmake_info << "verilate(" << library_name << std::endl;
  cmake_info << "  "
             << "INCLUDE_DIRS " << rtl_include_dir_ << std::endl;
  cmake_info << "  SOURCES " << rtl_top_path_ << std::endl;
  cmake_info << "  VERILATOR_ARGS --timescale \"1ns/10ps\" -O3" << std::endl;
  cmake_info << ")" << std::endl << std::endl;

  cmake_info << "add_executable(" << tandem_name << " __FILL_IN_MAIN_FILE__)"
             << std::endl;
  cmake_info << "target_link_libraries(" << tandem_name << " PUBLIC "
             << library_name << ")" << std::endl;
  cmake_info << "target_include_directories(" << tandem_name
             << " PUBLIC ${PROJECT_SOURCE_DIR}/include)" << std::endl
             << std::endl;
  outFile << cmake_info.rdbuf();
  outFile.close();
}

} // namespace ilang