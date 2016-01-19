package(default_visibility = ["//visibility:public"])

cc_library(
    name = "main",
    srcs = [
        "lib64/libcublas.so.7.0",
        "lib64/libcudart.so.7.0",
        "lib64/libcufft.so.7.0",
        "lib64/libcurand.so.7.0",
    ],
    hdrs = glob([
        "include/**/*.h",
        "include/**/*.hpp",
        "include/**/*.inl",
    ]),
    includes = ["include/"],
    linkopts = ["-Wl,-rpath,/usr/local/cuda/lib64"],
)
