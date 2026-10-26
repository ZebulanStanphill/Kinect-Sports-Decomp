// R1::Soundscape::CAkFilePackageLUT::CAkFilePackageLUT(): stores CAkFilePackageLUT's vtable,
// initialises members.
// The class is declared from its vtable's name. Its members are placeholders at the offsets this
// code uses.

namespace R1 {
    namespace Soundscape {
        class CAkFilePackageLUT {
        public:
            CAkFilePackageLUT();
            virtual ~CAkFilePackageLUT();

            unsigned short m_4;
            unsigned char pad_6[0x2];
            unsigned int m_8;
            unsigned int m_C;
            unsigned int m_10;
        };
    }
}

R1::Soundscape::CAkFilePackageLUT::CAkFilePackageLUT()
    : m_4(0), m_8(0), m_C(0), m_10(0)
{
}
