cmake_minimum_required(VERSION 3.20)
project(MLIRToy)

find_package(MLIR REQUIRED CONFIG)

add_mlir_dialect(ToyDialect dialect/ToyDialect.td
  ToyDialect.cpp)
add_mlir_conversion_plugin(ToyToStdLowering
  transforms/ToyTransforms.cpp)

