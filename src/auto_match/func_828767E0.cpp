// R1::Soundscape::CAkFilePackageLUT::~CAkFilePackageLUT(): stores CAkFilePackageLUT's vtable.
// The class is declared from its vtable's name; its scalar deleting destructor is in the vtable,
// so the destructor is virtual.

namespace R1 {
    namespace Soundscape {
        class CAkFilePackageLUT {
        public:
            virtual ~CAkFilePackageLUT();
        };
    }
}

R1::Soundscape::CAkFilePackageLUT::~CAkFilePackageLUT()
{
}
