#include <ilang/target-sc/ila_sim.h>

#include <queue>

#include <ilang/ila/ast_fuse.h>
#include <ilang/util/log.h>

namespace ilang {

IlaSim::IlaSim() {}

IlaSim::IlaSim(const InstrLvlAbsPtr& model_ptr) { model_ptr_ = model_ptr; }

void IlaSim::set_instr_lvl_abs(const InstrLvlAbsPtr& model_ptr) {
  model_ptr_ = model_ptr;
}

void IlaSim::set_systemc_path(std::string systemc_path) {
  systemc_path_ = systemc_path;
}

void IlaSim::sim_gen(std::string export_dir, bool external_mem, bool readable,
                     bool qemu_device, bool zero_unintepreted_func,
                     int tandem_scenario, std::string tandem_ref_map) {
  sim_gen_init(export_dir, external_mem, readable, qemu_device,
               zero_unintepreted_func, tandem_scenario, tandem_ref_map);
  sim_gen_init_header();
  sim_gen_input();
  sim_gen_state();
  sim_gen_init();
  sim_gen_decode();
  if (tandem_verification_)
    sim_gen_tandem();
  sim_gen_state_update();
  sim_gen_execute_kernel();
  sim_gen_execute_invoke();
  sim_gen_export();
}

void IlaSim::sim_gen_init(std::string export_dir, bool external_mem,
                          bool readable, bool qemu_device,
                          bool zero_unintepreted_func, int tandem_scenario,
                          std::string tandem_ref_map) {
  header_.str("");
  mk_script_.str("");
  obj_list_.str("");
  header_indent_ = "";
  searched_id_set_.clear();
  store_ite_set_.clear();
  const_mem_set_.clear();
  declared_id_set_.clear();
  func_set_.clear();
  defined_store_ite_set_.clear();
  defined_state_set_.clear();
  dfs_ld_search_set_.clear();
  external_ld_set_.clear();
  external_st_set_.clear();
  ld_st_counter_ = 0;
  EXTERNAL_MEM_ = external_mem;
  export_dir_ = export_dir;
  readable_ = readable;
  qemu_device_ = qemu_device;
  zero_unintepreted_func_ = zero_unintepreted_func;
  tandem_verification_ = (tandem_scenario >= 0);
  tandem_scenario_ = tandem_scenario;
  tandem_ref_map_ = tandem_ref_map;
}

void IlaSim::sim_gen_tandem() {
  switch (tandem_scenario_) {
    case 1: sim_gen_tandem_s1(); break;
    case 2: sim_gen_tandem_s2(); break;
    case 3: sim_gen_tandem_s3(); break;
    case 4: sim_gen_tandem_s4(); break;
    default: break;
  }
}

void IlaSim::sim_gen_tandem_s1() {
  aux_pc_enable_ = true;
  header_ << header_indent_ << "uint32_t " << model_ptr_->name().str() << "_pc;" << std::endl;
  tandem_rtl_ = "../refinement/rtl_tmp.json";
  create_tandem_check_s1();
  create_ila_wrapper();
  create_rtl_wrapper();

}

void IlaSim::sim_gen_tandem_s2() {
  create_tandem_check_s2();
  create_tandem_constructor();
}

void IlaSim::sim_gen_tandem_s3() {
}

void IlaSim::sim_gen_tandem_s4() {
}

void IlaSim::sim_gen_init_header() {
  if (!qemu_device_) {
    header_ << header_indent_ << "#include \"systemc.h\"" << std::endl;
    header_ << header_indent_ << "#include <map>" << std::endl;
    header_ << header_indent_ << "SC_MODULE(" << model_ptr_->name() << ") {"
            << std::endl;
    increase_indent(header_indent_);
  } else {
    header_ << header_indent_ << "#include <boost/multiprecision/cpp_int.hpp>"
            << std::endl;
    if (tandem_verification_) {
      header_ << "#define " << kTandemMacro << std::endl;
      header_ << "#ifdef " << kTandemMacro << std::endl;
      header_ << "#include \"" << model_ptr_->name().str() << "_rtl.h\""
              << std::endl;
      header_ << header_indent_ << get_exception_def(header_indent_);
      for (uint i = 0; i < model_ptr_->instr_num(); i++) {
        header_ << header_indent_ << "#define " << model_ptr_->instr(i)->name().str() << " "
                << std::to_string(i) << std::endl;
      }
      header_ << header_indent_ << "#endif" << std::endl;
    }
    header_ << header_indent_ << "using namespace boost::multiprecision;"
            << std::endl;
    int_var_width_scan();
    for (auto int_width = int_var_width_set_.begin();
         int_width != int_var_width_set_.end(); int_width++) {
      if ((*int_width == 8) || (*int_width == 16) || (*int_width == 32) ||
          (*int_width == 64) || (*int_width == 128) || (*int_width == 256) ||
          (*int_width == 512) || (*int_width == 1024))
        continue;
      header_ << header_indent_ << "typedef number<cpp_int_backend<"
              << *int_width << ", " << *int_width
              << ", unsigned_magnitude, unchecked, void> > uint" << *int_width
              << "_t;" << std::endl;
    }
    header_ << header_indent_ << "#include <map>" << std::endl;
    header_ << header_indent_ << "class " << model_ptr_->name() << " {"
            << std::endl;
    header_ << "public:" << std::endl;
    increase_indent(header_indent_);
  }
}

void IlaSim::sim_gen_input() {
  for (unsigned int i = 0; i < model_ptr_->input_num(); i++) {
    create_input(model_ptr_->input(i));
  }
}

void IlaSim::sim_gen_state() {
  std::queue<InstrLvlAbsPtr> child_ila_queue;
  for (unsigned int i = 0; i < model_ptr_->state_num(); i++)
    create_state(model_ptr_->state(i));

  for (unsigned int i = 0; i < model_ptr_->child_num(); i++)
    child_ila_queue.push(model_ptr_->child(i));

  while (!child_ila_queue.empty()) {
    auto current_ila = child_ila_queue.front();
    child_ila_queue.pop();
    for (unsigned int i = 0; i < current_ila->state_num(); i++)
      create_child_state(current_ila->state(i));
    for (unsigned int i = 0; i < current_ila->child_num(); i++)
      child_ila_queue.push(current_ila->child(i));
  }
}

void IlaSim::sim_gen_init() {
  std::queue<InstrLvlAbsPtr> child_ila_queue;
  for (unsigned int i = 0; i < model_ptr_->child_num(); i++)
    child_ila_queue.push(model_ptr_->child(i));
  while (!child_ila_queue.empty()) {
    auto current_ila = child_ila_queue.front();
    child_ila_queue.pop();
    create_init(current_ila);
    for (unsigned int i = 0; i < current_ila->child_num(); i++) {
      child_ila_queue.push(current_ila->child(i));
    }
  }
}

void IlaSim::sim_gen_decode() {
  std::queue<InstrLvlAbsPtr> ila_queue;
  ila_queue.push(model_ptr_);
  DebugLog::Enable("ILA hierarchy");
  while (!ila_queue.empty()) {
    auto current_ila = ila_queue.front();
    ila_queue.pop();
    ILA_INFO << "current_ila_name:" << current_ila->name();
    for (unsigned int i = 0; i < current_ila->child_num(); i++) {
      ILA_INFO << "current_ila_child:" << current_ila->child(i)->name();
      ila_queue.push(current_ila->child(i));
    }
    for (unsigned int i = 0; i < current_ila->instr_num(); i++) {
      ILA_INFO << "current_ila_instr:" << current_ila->instr(i)->name();
      create_decode(current_ila->instr(i));
    }
    ILA_INFO << std::endl;
  }
  DebugLog::Disable("ILA hierarchy");
}

void IlaSim::sim_gen_state_update() {
  std::queue<InstrLvlAbsPtr> ila_queue;
  ila_queue.push(model_ptr_);
  while (!ila_queue.empty()) {
    auto current_ila = ila_queue.front();
    ila_queue.pop();
    for (unsigned int i = 0; i < current_ila->child_num(); i++) {
      ila_queue.push(current_ila->child(i));
    }
    for (unsigned int i = 0; i < current_ila->instr_num(); i++) {
      create_state_update(current_ila->instr(i));
    }
  }
}

void IlaSim::sim_gen_execute_kernel() {
  std::stringstream execute_kernel;
  std::string indent = "";
  if (!qemu_device_)
    execute_kernel << indent << "#include \"systemc.h\"" << std::endl;
  execute_kernel << indent << "#include \"" << model_ptr_->name() << ".h\""
                 << std::endl;
  if (tandem_verification_) {
    execute_kernel << indent << "#ifdef " << kTandemMacro << std::endl;
    execute_kernel << indent << "void " << model_ptr_->name() << "::compute(" << kRTLSimType << "* v) {"
                   << std::endl;    
    increase_indent(indent);
    execute_kernel << indent << "tandem_f_ptr = -1;" << std::endl;
    decrease_indent(indent); 
    execute_kernel << indent << "#else" << std::endl;
    execute_kernel << indent << "void " << model_ptr_->name() << "::compute() {"
                   << std::endl;
    execute_kernel << indent << "#endif" << std::endl;
  } else 
    execute_kernel << indent << "void " << model_ptr_->name() << "::compute() {"
      << std::endl;
  increase_indent(indent);
  if (EXTERNAL_MEM_) {
    execute_write_external_mem(execute_kernel, indent);
    execute_read_external_mem(execute_kernel, indent);
    execute_external_mem_before_input(execute_kernel, indent);
  }
  if (!qemu_device_)
    execute_read_input(execute_kernel, indent);
  if (EXTERNAL_MEM_)
    execute_external_mem_after_output(execute_kernel, indent);
  execute_parent_instructions(execute_kernel, indent);
#ifdef CHILD_LOOP
  execute_init(execute_kernel, indent);
#endif
  execute_child_instructions(execute_kernel, indent);
  if (EXTERNAL_MEM_)
    execute_external_mem_return(execute_kernel, indent);
  if (!qemu_device_)
    execute_write_output(execute_kernel, indent);
  decrease_indent(indent);
  execute_tandem(execute_kernel, indent);
  execute_kernel << indent << "};" << std::endl;
  execute_kernel_export(execute_kernel);
  execute_kernel_mk_file();
  execute_kernel_header();
}

void IlaSim::sim_gen_execute_invoke() {
  if (!qemu_device_) {
    header_ << header_indent_ << "SC_HAS_PROCESS(" << model_ptr_->name() << ");"
            << std::endl;
    header_ << header_indent_ << model_ptr_->name()
            << "(sc_module_name name_) : sc_module(name_) {" << std::endl;
    increase_indent(header_indent_);
    header_ << header_indent_ << "SC_METHOD(compute);" << std::endl;
    header_ << header_indent_ << "sensitive";
    for (unsigned int i = 0; i < model_ptr_->input_num(); i++) {
      header_ << " << " << model_ptr_->name() << "_"
              << model_ptr_->input(i)->name() << "_in";
    }
    header_ << ";" << std::endl;
    decrease_indent(header_indent_);
    header_ << header_indent_ << "}" << std::endl;
  }

  decrease_indent(header_indent_);
  header_ << header_indent_ << "};" << std::endl;
}

void IlaSim::sim_gen_export() {
  std::ofstream outFile;
  outFile.open(export_dir_ + model_ptr_->name().str() + ".h");
  outFile << header_.rdbuf();
  outFile.close();
  if (!qemu_device_) {
    mk_script_ << "g++ -I. -I " << systemc_path_ << "/include/ "
               << "-L. -L " << systemc_path_ << "/lib-linux64/ "
               << "-Wl,-rpath=" << systemc_path_ << "/lib-linux64/ -std=c++11 "
               << "-c -o "
               << "uninterpreted_func.o "
               << "../../uninterpreted_func/uninterpreted_func.cc "
               << "-lsystemc" << std::endl;
    // mk_script_ << "g++ -I. -I " << systemc_path_ << "/include/ "
    //           << "-L. -L " << systemc_path_ << "/lib-linux64/ "
    //           << "-Wl,-rpath=" << systemc_path_ << "/lib-linux64/ "
    //           << "-c -o "
    //           << "test_tb.o test_tb.cc "
    //           << "-lsystemc" << std::endl;

    // mk_script_ << "g++ -I. -I " << systemc_path_ << "/include/ "
    //            << "-L. -L " << systemc_path_ << "/lib-linux64/ "
    //            << "-Wl,-rpath=" << systemc_path_ << "/lib-linux64/ "
    //            << "-o "
    //            << "test_tb test_tb.o " << obj_list_.rdbuf() << "-lsystemc"
    //            << endl;
  } else {
    cmake_script_ << "AUX_SOURCE_DIRECTORY(./ SIM_FILES)" << std::endl;
    cmake_script_ << "set(CMAKE_CXX_FLAGS -O3)" << std::endl;
    cmake_script_ << "add_library(src ${SIM_FILES})" << std::endl;
  }
  outFile.open(export_dir_ + "mk.sh");
  outFile << mk_script_.rdbuf();
  outFile.close();
  outFile.open(export_dir_ + "CMakeLists.txt");
  outFile << cmake_script_.rdbuf();
  outFile.close();
}

}; // namespace ilang
