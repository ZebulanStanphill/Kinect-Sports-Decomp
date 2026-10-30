// R1::Soundscape::BankEntryContext_c default constructor: vtable, embedded sub-object
// (fn_82292780), flag bytes cleared, then registers itself with the manager from fn_82868EF0.
namespace R1 {
namespace Soundscape {
class BankEntryContext_c;
}
}

class Mgr_82868EF0 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2(R1::Soundscape::BankEntryContext_c *c);
};

extern "C" {
void *fn_82292780(void *self);
Mgr_82868EF0 *fn_82868EF0();
}

namespace R1 {
namespace Soundscape {
class BankEntryContext_c {
public:
    BankEntryContext_c();
    virtual ~BankEntryContext_c();

    char m_sub[0x24];
    unsigned char m_28;
    unsigned char m_29;
    unsigned char m_2a;
    unsigned char m_2b;
    unsigned char m_2c;
    Mgr_82868EF0 *m_mgr;
};

BankEntryContext_c::BankEntryContext_c()
{
    fn_82292780(m_sub);
    m_28 = 0;
    m_29 = 0;
    m_2a = 0;
    m_2b = 0;
    m_2c = 0;
    m_mgr = 0;
    Mgr_82868EF0 *m = fn_82868EF0();
    if (m_mgr != m) {
        m_mgr = m;
        m->v2(this);
    }
}
}
}
