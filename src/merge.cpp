// merge.cpp — part of password-export-tool.

#include "passwordexporttool/merge.h"

#include <cstdio>

namespace passwordexporttool {

Merge::Merge(const std::string& config_path)
    : config_path_(config_path) {}

void Merge::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Merge::run() {
    if (verbose_) std::fprintf(stderr, "[password-export-tool] merge: run\n");
    // core logic lives here
    return true;
}

}  // namespace passwordexporttool
