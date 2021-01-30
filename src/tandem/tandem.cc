#include <ilang/tandem/tandem.h>
#include <ilang/ila/ast_fuse.h>
#include <ilang/target-sc/ila_sim.h>
#include <sys/stat.h>
#include <sys/types.h>


namespace ilang {
  void TandemGenerator::set_tandem_av_check() {
    av_check_enable_ = true;
  }

  void TandemGenerator::set_tandem_av_swap() {
    av_swap_enable_ = true;
  }

  void TandemGenerator::set_ref_map(std::string tandem_ref_map) {
    tandem_ref_map_ = tandem_ref_map;
  }

  void TandemGenerator::set_ila(const InstrLvlAbsPtr& model_ptr) {
    model_ptr_ = model_ptr;
  }

  void TandemGenerator::set_export_path(std::string export_dir) {
    export_dir_ = export_dir;
  }

  void TandemGenerator::set_rtl(std::string rtl_include_dir, std::string rtl_top_path) {
    rtl_include_dir_ = rtl_include_dir;
    rtl_top_path_ = rtl_top_path;
  }

  void TandemGenerator::generate() {
    IlaSim ila_sim;
    ila_sim.set_instr_lvl_abs(model_ptr_);
    uint32_t scenario = (av_swap_enable_) ? 4 : (av_check_enable_) ? 2 : -1;
    mkdir(export_dir_.c_str(), 0x777);
    mkdir((export_dir_ + "include/").c_str(), 0x777);
    mkdir((export_dir_ + "src/").c_str(), 0x777);
    mkdir((export_dir_ + "src/ilated/").c_str(), 0x777);
    mkdir((export_dir_ + "src/tandem/").c_str(), 0x777);
    ila_sim.set_export_top_dir(export_dir_);
    ila_sim.set_rtl(rtl_include_dir_, rtl_top_path_);
    ila_sim.sim_gen(export_dir_ + "src/ilated/", false, true, true, false, scenario, tandem_ref_map_);
  }

  // void Tandem::create_out_dir(std::string export_dir) {
  //   // Check if src, app, include exists, if not create them
  // }
  
  // void Tandem::create_include() {
  // }
  
  // void Tandem::create_spec_simulator(std::string& export_dir){
  //   IlaSim ila_sim;
  //   ila_sim.set_instr_lvl_abs(model_ptr_);
  //   ila_sim.sim_gen(export_dir + "/src/", false, true, true);
  // }
  
  // void Tandem::create_i_input(std::ofstream& outfile) {
  //   std::string out_indent = "";
  //   outfile << out_indent << "void i_input(Ilated* i, " << model_ptr_->name().str() 
  //           << "_in& test_input) {" << std::endl;
  //   out_indent += "  ";
  //   for (int i = 0; i < model_ptr_->input_num(); i++) {
  //     auto input_i =  model_ptr_->input(i);
  //     outfile << out_indent << "i->i_top->" << model_ptr_->name().str()
  //             << "_" << input_i->name().str() << " = "
  //             << "test_input." << model_ptr_->name().str() << "_"
  //             << input_i->name().str() << ";" << std::endl; 
  //   }
  //   out_indent.pop_back();
  //   out_indent.pop_back();
  //   outfile << out_indent << "}" << std::endl;
  // }
  
  // void Tandem::create_next_instr(std::ofstream& outfile) {
  //   std::string out_indent = "";
  //   outfile << out_indent << "void next_instr(Ilated* i) {" << std::endl;
  //   outfile << out_indent << "  i->i_top->compute();" << std::endl;
  //   outfile << out_indent << "}" << std::endl;
  // }
  
  // void Tandem::create_i_top_include(std::string& export_dir) {
  //   std::ofstream outfile;
  //   std::string out_indent = "";
  //   outfile.open(export_dir + "/include/" + model_ptr_->name().str() + "_ila.h");
  //   outfile << out_indent << "#include \"" << model_ptr_->name().str() << ".h\""
  //           << std::endl;
  //   outfile << out_indent << "class Ilated {" << std::endl
  //           << out_indent << "public:" << std::endl
  //           << out_indent << "  Ilated() {" << std::endl
  //           << out_indent << "    i_top = new " << model_ptr_->name().str() 
  //           << ";" << std::endl
  //           << out_indent << "  }" << std::endl
  //           << out_indent << "  ~Ilated() {" << std::endl
  //           << out_indent << "    delete i_top;" << std::endl
  //           << out_indent << "  }" << std::endl
  //           << out_indent << "  " << model_ptr_->name().str() << "* i_top;"
  //           << std::endl
  //           << out_indent << "};" << std::endl;
  //   outfile << out_indent << "class " << model_ptr_->name().str() << "_in {"
  //           << std::endl << "public:" << std::endl;
  //   for (int i = 0; i < model_ptr_->input_num(); i++) {
  //     auto input_i = model_ptr_->input(i);
  //     if (GetUidSort(input_i->sort()) == AST_UID_SORT::BOOL)
  //       outfile << out_indent << "  bool " << model_ptr_->name().str()
  //               << "_" << input_i->name().str() << ";\n";
  //     else if (GetUidSort(input_i->sort()) == AST_UID_SORT::BV)
  //       outfile << out_indent << "  uint"  
  //               << std::to_string(input_i->sort()->bit_width()) 
  //               << "_t " << model_ptr_->name().str() << "_"
  //               << input_i->name().str() << ";" << std::endl;
  //     else
  //       std::cout << "No mem input supported" << std::endl;
  //   }
  //   outfile << out_indent << "};" << std::endl;
  //   outfile.close();
  // }
  
  // void Tandem::create_v_top_include(std::string& export_dir) {}
  
  // void Tandem::create_i_input_load(std::ofstream& outfile) {
  //   std::string out_indent = "  ";
  //   outfile << out_indent << "std::vector<" << model_ptr_->name().str()
  //           << "_in> tv;" << std::endl; 
  //   outfile << out_indent << "std::string tv_input;" << std::endl;  
  //   outfile << out_indent << "while (getline(tv_file, tv_input)) {" << std::endl
  //           << out_indent << "  " << model_ptr_->name().str() << "_in t;" 
  //           << std::endl 
  //           << out_indent << "  std::stringstream tv_input_ss(tv_input);" 
  //           << std::endl
  //           << out_indent << "  std::string t_string;" << std::endl;
  //   for (int i = 0; i < model_ptr_->input_num(); i++) {
  //     outfile << out_indent << "  if (getline(tv_input_ss, t_string, ','))" 
  //             << std::endl;
  //     outfile << out_indent << "    t." << model_ptr_->name().str()
  //             << "_" << model_ptr_->input(i)->name().str()
  //             << " = std::stoul(t_string, 0, 16);" << std::endl;
  //     outfile << out_indent << "  else" << std::endl;
  //     outfile << out_indent << "    std::cout << \" tv col is too small\" << std::endl;" 
  //             << std::endl;
  //   }
  //   outfile << out_indent << "  tv.push_back(t);" << std::endl; 
  //   outfile << out_indent << "}" << std::endl;
  // }
  
  // void Tandem::adapt_template(std::string& template_dir, std::string& export_dir) {
  //   std::ifstream template_file;
  //   template_file.open(template_dir + "/templ-tandem-II.cpp");
  //   std::ofstream outfile;
  //   outfile.open(export_dir + "/app/" + model_ptr_->name().str() + "-tandem.cc");
  //   std::string line;
  //   while (getline(template_file, line)) {
  //     if (line.find("Include Ilated Model") != -1) {
  //       outfile << "#include <" << model_ptr_->name().str()
  //               << "_ila.h>" << std::endl; 
  //     }
  //     if (line.find("// Impl") != -1) {
  //       create_i_input(outfile);
  //       create_next_instr(outfile);
  //     } 
  //     if (line.find("// tb load") != -1) {
  //       create_i_input_load(outfile);
  //     }
  //     outfile << line << std::endl;
  //   } 
  //   outfile.close();
  // }
  
  // void Tandem::sim_spec(std::string template_dir, std::string export_dir) {
  //   create_out_dir(export_dir);
  //   create_spec_simulator(export_dir); 
  //   create_i_top_include(export_dir);
  //   adapt_template(template_dir, export_dir);
    
  // }
}; 
  
