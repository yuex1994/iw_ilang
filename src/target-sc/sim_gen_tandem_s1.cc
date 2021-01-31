#include <boost/algorithm/string/replace.hpp>
#include <ilang/target-sc/ila_sim.h>

#include <ilang/ila/ast_fuse.h>
#include <ilang/util/log.h>

namespace ilang {

void IlaSim::sim_gen_tandem_s1() {
  aux_pc_enable_ = true;
  header_ << header_indent_ << "uint32_t " << model_ptr_->name().str() << "_pc;"
          << std::endl;
  header_ << header_indent_ << model_ptr_->name().str() << "();" << std::endl;
  header_ << header_indent_ << "int tandem_f_ptr;" << std::endl;
  tandem_rtl_ = "../refinement/rtl_tmp.json";
  create_tandem_check_s1();
  create_ila_wrapper();
  create_rtl_wrapper_s1();
  create_model_default_cc();
}

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
  create_rtl_wrapper_h_s1();
  create_rtl_wrapper_cc_s1();
}

void IlaSim::create_rtl_wrapper_h_s1() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_rtl.h");
  std::stringstream rtl_wrapper;
  rtl_wrapper.str("");
  std::string indent = "";

  create_rtl_wrapper_def(rtl_wrapper, indent);
  create_rtl_in(rtl_wrapper, indent);
  create_rtl_class_header_s1(rtl_wrapper, indent);
  outFile << rtl_wrapper.rdbuf();
  outFile.close();
}

void IlaSim::create_rtl_class_header_s1(std::stringstream& rtl_wrapper,
                                        std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_name = rtl_map["VERILOG"].get<std::string>();
  rtl_wrapper << indent << "class " << kRTLSimType << " {" << std::endl;
  rtl_wrapper << indent << "public:" << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "V" << rtl_name << "*v_top;" << std::endl;
  rtl_wrapper << indent << "Ilated* i;" << std::endl;
  rtl_wrapper << indent << "" << kRTLSimType << "(Ilated* ilated);" << std::endl;
  rtl_wrapper << indent << "bool start_condition(v_in t_v);" << std::endl;
  rtl_wrapper << indent << "void v_input(v_in t_v);" << std::endl;
  rtl_wrapper << indent << " ~" << kRTLSimType << "();" << std::endl;
  rtl_wrapper << indent << "void next_cycle();" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "};" << std::endl;
}

void IlaSim::create_rtl_wrapper_cc_s1() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + "_rtl.cc");
  std::stringstream rtl_wrapper_cc;
  rtl_wrapper_cc.str("");
  std::string indent = "";
  rtl_wrapper_cc << "#include \"" << model_ptr_->name().str() << "_ila.h\""
                 << std::endl;
  create_rtl_class_s1(rtl_wrapper_cc, indent);
  outFile << rtl_wrapper_cc.rdbuf();
  outFile.close();
}

void IlaSim::create_rtl_class_s1(std::stringstream& rtl_wrapper,
                                 std::string& indent) {
  create_rtl_constructor(rtl_wrapper, indent);
  create_start_condition(rtl_wrapper, indent);
  create_rtl_input(rtl_wrapper, indent);
  create_rtl_destructor(rtl_wrapper, indent);
  create_rtl_next_cycle(rtl_wrapper, indent);
}

void IlaSim::create_rtl_input(std::stringstream& rtl_wrapper,
                              std::string& indent) {
  auto rtl_map = load_json(tandem_rtl_);
  auto rtl_inputs = rtl_map["verilog inputs"];
  rtl_wrapper << indent << "void " << kRTLSimType << "::v_input(v_in t_v) {"
              << std::endl;
  increase_indent(indent);
  rtl_wrapper << indent << "if (start_condition(t_v)) {" << std::endl;
  increase_indent(indent);
  for (const auto& item : rtl_inputs.items()) {
    rtl_wrapper << indent << "v_top->" << item.key() << " = t_v." << item.key()
                << ";" << std::endl;
  }
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
  decrease_indent(indent);
  rtl_wrapper << indent << "}" << std::endl;
}

} // namespace ilang