extern "C" {
void *fn_82811400(void *out, int n);
void fn_82811238(void *heap, void *p, void *r);
extern char lbl_832116F8[];
}
namespace R1 { namespace Soundscape {  class WwiseEventInitialising_c { public: virtual ~WwiseEventInitialising_c() {} }; } } 
extern "C" R1::Soundscape::WwiseEventInitialising_c *fn_82868AB8(R1::Soundscape::WwiseEventInitialising_c *self, unsigned int flags)
{
    self->R1::Soundscape::WwiseEventInitialising_c::~WwiseEventInitialising_c();
    if (flags & 1) {
        char buf[24];
        fn_82811238(lbl_832116F8, self, fn_82811400(buf, 4));
    }
    return self;
}
