# bazel_nvcc
use nvcc compiler in bazel

# how to build

bazel build --copt=-DuseCUDA --crosstool_top=//cuda:crosstool cuda/...
