extern "C" {
void fn_8287AD88(void *self);
void *fn_82811400(void *out, int n);
void fn_82811238(void *heap, void *p, void *r);
extern char lbl_832116F8[];
}

namespace R1 {
namespace Soundscape {
class WwiseEmitter_Plane_c {
public:
    virtual __forceinline ~WwiseEmitter_Plane_c() { fn_8287AD88(this); }
};
}
}

extern "C" R1::Soundscape::WwiseEmitter_Plane_c *fn_82871620(R1::Soundscape::WwiseEmitter_Plane_c *self, unsigned int flags)
{
    self->R1::Soundscape::WwiseEmitter_Plane_c::~WwiseEmitter_Plane_c();
    if (flags & 1) {
        char buf[24];
        fn_82811238(lbl_832116F8, self, fn_82811400(buf, 4));
    }
    return self;
}
