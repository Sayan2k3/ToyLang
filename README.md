# 🧠 ToyLang — A Minimal MLIR-Based Toy Language

**ToyLang** is a learning-focused compiler project built using [MLIR](https://mlir.llvm.org/), part of the LLVM ecosystem. It demonstrates how to build a simple compiler frontend and intermediate representation for a toy programming language using:

- 🚀 Custom Dialects
- 🔁 IR Transformations
- 🧱 Code Lowering and LLVM IR Generation

> ⚙️ Based on the official [MLIR Toy Tutorial](https://mlir.llvm.org/docs/Tutorials/Toy/) with personal customization for deeper understanding.

---

## 📌 Features

- 🗣️ **Toy Dialect**: Defines types and operations unique to the ToyLang syntax.
- 🔄 **Dialect Conversion**: Lowers `toy.const` operations to `arith.constant`.
- 🧠 **Pattern Matching & Rewriting**: Uses MLIR's `PatternRewriter` and `DialectConversion` infrastructure.
- 🧪 **Step-by-Step IR Transformation**: Translates ToyLang to Standard/LLVM dialects.
- 🎯 **LLVM IR Support**: Fully supports lowering to LLVM IR via MLIR passes.

---

## 🛠️ Build Instructions

### 🔧 Prerequisites

- [LLVM + MLIR](https://mlir.llvm.org/getting_started/) (with CMake support)
- [CMake ≥ 3.13](https://cmake.org/)
- [Ninja](https://ninja-build.org/)
- GCC or MSVC (C++17 compliant compiler)

### 🏗️ Building the Project

```bash
# Clone the repository
git clone https://github.com/Sayan2k3/ToyLang.git
cd ToyLang

# Create a build directory
mkdir build && cd build

# Configure using CMake (update LLVM_DIR path accordingly)
cmake -G "Ninja" -DLLVM_DIR="C:/Program Files/LLVM/lib/cmake/llvm" ..

# Compile using Ninja
ninja
