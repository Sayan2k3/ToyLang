#include "ToyDialect.h"
#include "mlir/IR/PatternMatch.h"
#include "mlir/Transforms/DialectConversion.h"

namespace {
struct ConstToStdPattern : public RewritePattern {
  // rewrite "toy.const" to "arith.constant"
};

struct ToyToStdLoweringPass
    : public PassWrapper<ToyToStdLoweringPass, OperationPass<ModuleOp>> {
  void runOnOperation() override {
    // apply ConversionTarget + pattern
  }
};
} // anonymous

