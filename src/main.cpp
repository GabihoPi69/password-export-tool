// main.cpp — entry point. Wires config and subsystems together.

#include "passwordexporttool/settings.h"
#include "passwordexporttool/readers.h"
#include "passwordexporttool/merge.h"
#include "passwordexporttool/encrypt.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    passwordexporttool::Settings settings = passwordexporttool::Settings::load_default();
    passwordexporttool::Readers readers(settings.store_path);
    passwordexporttool::Merge merge(settings.store_path);
    passwordexporttool::Encrypt encrypt(settings.store_path);
    std::fprintf(stderr, "[password-export-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
