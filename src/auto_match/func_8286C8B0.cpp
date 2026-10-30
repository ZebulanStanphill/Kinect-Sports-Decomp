extern "C" {
void *fn_82811400(void *out, int n);
void fn_82811238(void *heap, void *p, void *r);
extern char lbl_832116F8[];
}
namespace R1 { namespace Soundscape {  class ListenerBiasContext_c { public: virtual ~ListenerBiasContext_c() {} }; } } 
extern "C" R1::Soundscape::ListenerBiasContext_c *fn_8286C8B0(R1::Soundscape::ListenerBiasContext_c *self, unsigned int flags)
{
    self->R1::Soundscape::ListenerBiasContext_c::~ListenerBiasContext_c();
    if (flags & 1) {
        char buf[24];
        fn_82811238(lbl_832116F8, self, fn_82811400(buf, 4));
    }
    return self;
}
