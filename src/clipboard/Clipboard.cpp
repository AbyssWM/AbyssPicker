#include "Clipboard.hpp"

#include "../includes.hpp"
#include <abyssutils/os/Process.hpp>
#include <string>
#include <vector>

void NClipboard::copy(std::string data) {
    Abyssutils::OS::CProcess copy("wl-copy", {data});

    copy.runAsync();
}
