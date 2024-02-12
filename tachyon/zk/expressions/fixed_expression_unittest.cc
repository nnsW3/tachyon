#include "tachyon/zk/expressions/fixed_expression.h"

#include "gtest/gtest.h"

#include "tachyon/math/elliptic_curves/bn/bn254/fr.h"
#include "tachyon/math/finite_fields/test/finite_field_test.h"

namespace tachyon::zk {

using Fr = math::bn254::Fr;

class FixedExpressionTest : public math::FiniteFieldTest<Fr> {};

TEST_F(FixedExpressionTest, DegreeComplexity) {
  std::unique_ptr<FixedExpression<Fr>> expr =
      FixedExpression<Fr>::CreateForTesting(
          plonk::FixedQuery(1, Rotation(1), plonk::FixedColumnKey(1)));
  EXPECT_EQ(expr->Degree(), size_t{1});
  EXPECT_EQ(expr->Complexity(), uint64_t{1});
}

}  // namespace tachyon::zk
