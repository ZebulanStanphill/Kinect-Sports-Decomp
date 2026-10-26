// R1::Soundscape::WwiseEventContext_c::~WwiseEventContext_c(): stores WwiseEventContext_c's
// vtable.
// The class is declared from its vtable's name; its scalar deleting destructor is in the vtable,
// so the destructor is virtual.

namespace R1 {
    namespace Soundscape {
        class WwiseEventContext_c {
        public:
            virtual ~WwiseEventContext_c();
        };
    }
}

R1::Soundscape::WwiseEventContext_c::~WwiseEventContext_c()
{
}
