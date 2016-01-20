
[![Build Status](https://travis-ci.org/Hibbert-pku/bazel_nvcc.svg?branch=master)](https://travis-ci.org/Hibbert-pku/bazel_nvcc)

# bazel_nvcc
use nvcc compiler in bazel

# how to build

bazel build --copt=-DuseCUDA --crosstool_top=//cuda:crosstool cuda/...

bazel test --crosstool_top=//cuda:crosstool tests/...
