cc_library(
    name = "main",
    srcs = glob(
        ["gtest-1.7.0/src/*.cc"],
        exclude = ["gtest-1.7.0/src/gtest-all.cc"]
    ),
    hdrs = glob([
        "gtest-1.7.0/include/**/*.h",
        "gtest-1.7.0/src/*.h"
    ]),
    copts = [
        "-Iexternal/gtest/gtest-1.7.0/include",
        "-Iexternal/gtest/gtest-1.7.0"
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)
