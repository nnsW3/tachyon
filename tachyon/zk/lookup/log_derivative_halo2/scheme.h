#ifndef TACHYON_ZK_LOOKUP_LOG_DERIVATIVE_HALO2_SCHEME_H_
#define TACHYON_ZK_LOOKUP_LOG_DERIVATIVE_HALO2_SCHEME_H_

#include "tachyon/zk/lookup/log_derivative_halo2/prover.h"
#include "tachyon/zk/lookup/type.h"

namespace tachyon::zk::lookup::log_derivative_halo2 {

template <typename _Poly, typename _Evals, typename _Commitment>
struct Scheme {
  using Poly = _Poly;
  using Evals = _Evals;
  using Commitment = _Commitment;
  using Field = typename Poly::Field;

  using Prover = lookup::log_derivative_halo2::Prover<Poly, Evals>;

  constexpr static Type type = Type::kLogDerivativeHalo2;
};

}  // namespace tachyon::zk::lookup::log_derivative_halo2

#endif  // TACHYON_ZK_LOOKUP_LOG_DERIVATIVE_HALO2_SCHEME_H_
