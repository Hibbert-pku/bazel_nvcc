cc_library(
    name = "main",
    srcs = glob(
        ["gtest-1.7.0/src/*.cc"],
        exclude = ["gtest-1.7.0/src/gtest-all.cc"]
    ),
    hdrs = glob(["gtest-1.7.0/include/**/*.h"]),
    copts = [
        "-Iexternal/gtest/gtest-1.7.0",
        "-Iexternal/gtest/gtest-1.7.0/include"
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)
