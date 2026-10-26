// std::locale::facet::~facet(): stores facet's vtable.
// The class is declared from its vtable's name; its scalar deleting destructor is in the vtable,
// so the destructor is virtual.

namespace std {
    namespace locale {
        class facet {
        public:
            virtual ~facet();
        };
    }
}

std::locale::facet::~facet()
{
}
