
#ifndef ILANG_TANDEM_TANDEM_H__
#define ILANG_TANDEM_TANDEM_H__

#include <set>
#include <sstream>
#include <string>
#include <vector>

#include <ilang/ila/instr_lvl_abs.h>

namespace ilang {
  class Tandem {
  public:
    Tandem() {}
    Tandem(const InstrLvlAbsPtr& model_ptr) { model_ptr_ = model_ptr; }
    void sim_spec(std::string template_dir, std::string export_dir);
    void create_out_dir(std::string export_dir);
    void create_include(); 
    void create_i_input(std::ofstream& outfile);
    void create_i_input_load(std::ofstream& outfile);
    void create_next_instr(std::ofstream& outfile);
    void create_i_top_include(std::string& export_dir); 
    void create_v_top_include(std::string& export_dir);
    void create_spec_simulator(std::string& export_dir);
    void adapt_template(std::string& template_dir, std::string& export_dir);
    InstrLvlAbsPtr model_ptr_;
  };


};

#endif
