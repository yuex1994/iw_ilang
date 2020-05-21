/// \file
/// The implementation for checking the equivalence of two ILAs.

#include <ilang/ila-handler/eq_check.h>

#include <ilang/ila/expr_fuse.h>
#include <ilang/ila/instr_lvl_abs.h>
#include <ilang/util/log.h>
#include <ilang/verification/eq_check_crr.h>
#include <ilang/ila/ast_fuse.h>

namespace ilang {

int StateNumber(const Ila& a) {
  int r = 0;
  auto ma = a.get();
  for (int i = 0; i < ma->state_num(); i++) {
    auto s = ma->state(i);
    if (GetUidSort(s->sort()) == AST_UID_SORT::BOOL)
      r += 1;
    else if (GetUidSort(s->sort()) == AST_UID_SORT::BV)
      r+= s->sort()->bit_width();
  }
  return r;
}

bool CheckEqSameMicroArch(const Ila& a, const Ila& b, bool update) {
  auto ma = a.get();
  auto mb = b.get();

  ILA_NOT_NULL(ma);
  ILA_NOT_NULL(mb);

  if (ma->state_num() != mb->state_num()) {
    ILA_INFO << "#state mismatch";
    return false;
  }

  if (ma->input_num() != mb->input_num()) {
    ILA_INFO << "#input mismatch";
    return false;
  }

  if (ma->instr_num() != mb->instr_num()) {
    ILA_INFO << "#instruction mismatch";
    return false;
  }

  auto relation = RelationMap::New();

  for (decltype(ma->input_num()) i = 0; i != ma->input_num(); i++) {
    auto inp_a = ma->input(i);
    auto inp_b = mb->input(inp_a->name().str());
    if (inp_b && (inp_a->sort() == inp_b->sort())) {
      relation->add(ExprFuse::Eq(inp_a, inp_b));
    } else {
      ILA_INFO << "No corresponding input " << inp_a << " found";
      return false;
    }
  }

  for (decltype(ma->state_num()) i = 0; i != ma->state_num(); i++) {
    auto var_a = ma->state(i);
    auto var_b = mb->state(var_a->name().str());
    if (var_b && (var_a->sort() == var_b->sort())) {
      relation->add(ExprFuse::Eq(var_a, var_b));
    } else {
      ILA_INFO << "No corresponding state var " << var_a << " found";
      return false;
    }
  }

  auto refinement_a = nullptr;
  auto refinement_b = nullptr;

  auto GetFlatRefinement = [=](InstrLvlAbsPtr m, InstrPtr instr) {
    // target
    auto ref = RefinementMap::New();
    ref->set_tgt(instr);

    // apply
    ref->set_appl(instr->decode());

    // flush
    auto has_instr = ExprFuse::BoolConst(false);
    for (unsigned i = 0; i < m->instr_num(); i++) {
      has_instr = ExprFuse::Or(has_instr, m->instr(i)->decode());
    }
    ref->set_flush(ExprFuse::Not(has_instr));

    // ready
    // fix bound 1?
  };

  if (ma->child_num() != mb->child_num()) {
    return false;
  }

  return true;
}

}; // namespace ilang

