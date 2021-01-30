
#ifndef ILANG_TANDEM_TANDEM_GENERATOR_H__
#define ILANG_TANDEM_TANDEM_GENERATOR_H__

#include <set>
#include <sstream>
#include <string>
#include <vector>

#include <ilang/ila/instr_lvl_abs.h>

namespace ilang {
  class TandemGenerator {
  public:
    TandemGenerator() {}
    TandemGenerator(const InstrLvlAbsPtr& model_ptr) { model_ptr_ = model_ptr; }
    void enable_tandem_av_check();
    void enable_tandem_av_swap();
    void set_ref_map(std::string tandem_ref_map);
    void set_ila(const InstrLvlAbsPtr& model_ptr);
    void set_export_path(std::string export_dir);
    void set_rtl(std::string rtl_include_dir, std::string rtl_top_path);
    void generate(); 
    // void sim_spec(std::string template_dir, std::string export_dir);
    // void create_out_dir(std::string export_dir);
    // void create_include(); 
    // void create_i_input(std::ofstream& outfile);
    // void create_i_input_load(std::ofstream& outfile);
    // void create_next_instr(std::ofstream& outfile);
    // void create_i_top_include(std::string& export_dir); 
    // void create_v_top_include(std::string& export_dir);
    // void create_spec_simulator(std::string& export_dir);
    // void adapt_template(std::string& template_dir, std::string& export_dir);
    InstrLvlAbsPtr model_ptr_;
    bool av_check_enable_;
    bool av_swap_enable_;
    std::string tandem_ref_map_;
    std::string rtl_include_dir_;
    std::string rtl_top_path_;
    std::string export_dir_;
  };


};

#endif
