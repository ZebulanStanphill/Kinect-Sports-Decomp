extern "C" {
void fn_82878300(void *self);
void *fn_82811400(void *out, int n);
void fn_82811238(void *heap, void *p, void *r);
extern char lbl_832116F8[];
}

namespace R1 {
namespace Soundscape {
class ReverbEmitterControl_c {
public:
    virtual __forceinline ~ReverbEmitterControl_c() { fn_82878300((char *)this + 0x10); }
};
}
}

extern "C" R1::Soundscape::ReverbEmitterControl_c *fn_828784C0(R1::Soundscape::ReverbEmitterControl_c *self, unsigned int flags)
{
    self->R1::Soundscape::ReverbEmitterControl_c::~ReverbEmitterControl_c();
    if (flags & 1) {
        char buf[24];
        fn_82811238(lbl_832116F8, self, fn_82811400(buf, 4));
    }
    return self;
}
