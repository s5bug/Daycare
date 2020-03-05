#pragma once

#include <array>
#include <memory>
#include <string>

#include "save.hpp"

namespace Daycare {

    struct game {
        const uint64_t titleId;
        const char* name;
        const uint8_t save;
    };

    extern const std::array<game, 6> games;

    std::shared_ptr<Save> open(game game);

}
