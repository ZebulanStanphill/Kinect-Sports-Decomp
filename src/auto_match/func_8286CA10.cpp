// R1::Soundscape::OcclusionTest_c::~OcclusionTest_c(): stores OcclusionTest_c's vtable.
// The class is declared from its vtable's name; its scalar deleting destructor is in the vtable,
// so the destructor is virtual.

namespace R1 {
    namespace Soundscape {
        class OcclusionTest_c {
        public:
            virtual ~OcclusionTest_c();
        };
    }
}

R1::Soundscape::OcclusionTest_c::~OcclusionTest_c()
{
}
