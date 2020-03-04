#include "../include/save.hpp"

namespace Daycare {
    
    class GenOneSave : public Save {
        private:

        const char* version;

        public:

        GenOneSave(const char* v) : version(v) {}
    };

    class GenTwoSave : public Save {
        private:

        const char* version;

        public:

        GenTwoSave(const char* v) : version(v) {}
    };

    const std::array<std::function<std::unique_ptr<Save> (const char*)>, 2> saves = {{
        [](const char* v) { return std::make_unique<GenOneSave>(v); },
        [](const char* v) { return std::make_unique<GenTwoSave>(v); }
    }};

}
