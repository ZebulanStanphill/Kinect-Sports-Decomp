extern "C" {
void fn_82872E60(void *self);
void fn_8287AD88(void *self);
void *fn_82811400(void *out, int n);
void fn_82811238(void *heap, void *p, void *r);
extern char lbl_832116F8[];
}

namespace R1 {
namespace Soundscape {
class WwiseEmitter_Path_c {
public:
    virtual __forceinline ~WwiseEmitter_Path_c() { fn_82872E60((char *)this + 0xf4); fn_8287AD88(this); }
};
}
}

extern "C" R1::Soundscape::WwiseEmitter_Path_c *fn_828736E8(R1::Soundscape::WwiseEmitter_Path_c *self, unsigned int flags)
{
    self->R1::Soundscape::WwiseEmitter_Path_c::~WwiseEmitter_Path_c();
    if (flags & 1) {
        char buf[24];
        fn_82811238(lbl_832116F8, self, fn_82811400(buf, 4));
    }
    return self;
}
