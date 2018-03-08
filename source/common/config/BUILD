licenses(["notice"])  # Apache 2

load(
    "@envoy//bazel:envoy_build_system.bzl",
    "envoy_cc_binary",
    "envoy_cc_library",
    "envoy_cc_test",
    "envoy_package",
)

envoy_package()

load("@envoy_api//bazel:api_build_system.bzl", "api_proto_library")

envoy_cc_library(
    name = "common_well_known_names_lib", # TODO(dio): use a better namespace.
    hdrs = ["well_known_names.h"],
    repository = "@envoy",

    deps = [
        "@envoy//source/common/singleton:const_singleton",
    ]
)