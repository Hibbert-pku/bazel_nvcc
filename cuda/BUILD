package(default_visibility = ["//visibility:public"])

config_setting(
    name = "useCUDA",
    values = {
      "copt": "-DuseCUDA",
      #"crosstool_top": "//cuda",
    },
)

cc_toolchain(
    name = "cc-compiler-local",
    all_files = ":empty",
    compiler_files = ":empty",
    cpu = "k8",
    dwp_files = ":empty",
    dynamic_runtime_libs = [":empty"],
    linker_files = ":empty",
    objcopy_files = ":empty",
    static_runtime_libs = [":empty"],
    strip_files = ":empty",
    supports_param_files = 0,
)

cc_library(
  name = "cuda",
  srcs = select({":useCUDA": ["cuda.cc"],
                 "//conditions:default": []
               })
)

cc_binary(
  name = "main",
  srcs = ["main.cc"],
  deps = [":cuda"],
)

filegroup(
    name = "crosstool",
    srcs = ["CROSSTOOL"],
)

filegroup(
    name = "empty",
    srcs = [],
)
