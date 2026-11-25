// readers — part of password-export-tool.

#pragma once

#include <string>
#include <vector>

namespace passwordexporttool {

class Readers {
public:
    explicit Readers(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace passwordexporttool
