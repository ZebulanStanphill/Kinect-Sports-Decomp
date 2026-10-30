extern "C" {
void fn_82864898(void *self);
void *fn_82811400(void *out, int n);
void fn_82811238(void *heap, void *p, void *r);
extern char lbl_832116F8[];
}

namespace R1 {
namespace Soundscape {
class BankEntryContext_c {
public:
    virtual __forceinline ~BankEntryContext_c() { fn_82864898((char *)this + 0x4); }
};
}
}

extern "C" R1::Soundscape::BankEntryContext_c *fn_828761C0(R1::Soundscape::BankEntryContext_c *self, unsigned int flags)
{
    self->R1::Soundscape::BankEntryContext_c::~BankEntryContext_c();
    if (flags & 1) {
        char buf[24];
        fn_82811238(lbl_832116F8, self, fn_82811400(buf, 4));
    }
    return self;
}
