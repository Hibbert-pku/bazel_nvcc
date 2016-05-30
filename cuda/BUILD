package(default_visibility = ["//visibility:public"])

config_setting(
    name = "useCUDA",
    values = {
      "copt": "-DuseCUDA",
    },
)

cc_library(
  name = "cuda",
  srcs = select({":useCUDA": ["cuda.cc"],
                 "//conditions:default": []
               }) + ["main.h"],
  deps = ["@cuda//:main"],
)

cc_binary(
  name = "main",
  srcs = ["main.cc"],
  deps = [":cuda"],
)
