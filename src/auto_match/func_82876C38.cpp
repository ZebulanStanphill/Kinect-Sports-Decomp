// R1::Soundscape::CAkFileLocationBase::CAkFileLocationBase(): stores CAkFileLocationBase's vtable,
// initialises members.
// The class is declared from its vtable's name. Its members are placeholders at the offsets this
// code uses.

namespace R1 {
    namespace Soundscape {
        class CAkFileLocationBase {
        public:
            CAkFileLocationBase();
            virtual ~CAkFileLocationBase();

            unsigned char m_4;
            unsigned char pad_5[0x103];
            unsigned char m_108;
            unsigned char pad_109[0x103];
            unsigned char m_20C;
            unsigned char pad_20D[0x103];
            unsigned char m_310;
        };
    }
}

R1::Soundscape::CAkFileLocationBase::CAkFileLocationBase()
    : m_4(0), m_108(0), m_20C(0), m_310(0)
{
}
