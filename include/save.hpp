#pragma once

#include <array>
#include <functional>
#include <memory>

namespace Daycare {

    class Save {
        public:

        virtual ~Save() {}

        // parse save (done by child constructor)
        // save save
        // get pokemon info
        // change pokemon info
    };

    extern const std::array<std::function<std::unique_ptr<Save> (const char*)>, 2> saves;
    
}
