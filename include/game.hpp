#pragma once

#include <array>
#include <string>

namespace Daycare {

    struct game {
        const uint64_t titleId;
        const char* name;
        const uint8_t save;
    };

    extern const std::array<game, 6> games;

}
