// R1::Soundscape::CAkFileLocationBase::~CAkFileLocationBase(): stores CAkFileLocationBase's
// vtable.
// The class is declared from its vtable's name; its scalar deleting destructor is in the vtable,
// so the destructor is virtual.

namespace R1 {
    namespace Soundscape {
        class CAkFileLocationBase {
        public:
            virtual ~CAkFileLocationBase();
        };
    }
}

R1::Soundscape::CAkFileLocationBase::~CAkFileLocationBase()
{
}
