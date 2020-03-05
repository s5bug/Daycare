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
        std::make_unique<GenOneSave, const char*>,
        std::make_unique<GenTwoSave, const char*>
    }};

}
