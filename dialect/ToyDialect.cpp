#include "ToyDialect.h"
#include "ToyDialect.h.inc"

using namespace mlir;
void ToyDialect::initialize() {
  addOperations<
    Toy::ConstOp
  >();
}

