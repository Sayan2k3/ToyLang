
// ToyDialect.td
include "mlir/IR/Dialect.h"

def Toy_Dialect : Dialect<"toy", "ToyDialect",
  [
    Op<"const", [HasNoSideEffect],
      [No<"Operands">, One<Result<[AnyType]> >],
      [AttrSizedOperandSegments<0>]]>;

