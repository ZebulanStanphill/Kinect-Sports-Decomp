// R1::Soundscape::BankEntry_c::BankEntry_c(): stores BankEntry_c's vtable; calls fn_82292780 on
// its members.
// The class is declared from its vtable's name. Its members are placeholders at the offsets this
// code uses.

extern "C" {
void fn_82292780(void *);
}

namespace R1 {
    namespace Soundscape {
        class BankEntry_c {
        public:
            BankEntry_c();
            virtual ~BankEntry_c();

            unsigned char m_4[0x24];
            unsigned char m_28;
            unsigned char m_29;
            unsigned char pad_2A[0x2];
            unsigned char m_2C;
        };
    }
}

R1::Soundscape::BankEntry_c::BankEntry_c()
{
    fn_82292780(m_4);
    m_28 = 0;
    m_29 = 0;
    m_2C = 0;
}
