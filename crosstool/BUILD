package(default_visibility = ["//visibility:public"])

config_setting(
    name = "is_mac",
    values = {
        "cpu": "darwin",
    }
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

filegroup(
    name = "crosstool",
    srcs = ["CROSSTOOL"],
)

filegroup(
    name = "empty",
    srcs = [],
)
