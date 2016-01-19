package(default_visibility = ["//visibility:public"])

# TODO(xibai): how to use bazel test instead of bazel build & run tests?

cc_test(
  name = "all_tests",
  srcs = ["tests.cc"],
  copts = ["-Iexternal/gtest/gtest-1.7.0/include", "-DuseCUDA"],
  linkopts = ["-L/usr/local/cuda/lib64 -L/usr/local/cuda/lib -lcuda -lcudart"],
  deps = ["@gtest//:main", "@cuda//:main"],
)
