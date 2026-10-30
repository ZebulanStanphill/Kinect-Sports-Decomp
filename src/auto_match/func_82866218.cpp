extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class WwiseInitParams_c { public: virtual ~WwiseInitParams_c() {} }; } } 
extern "C" R1::Soundscape::WwiseInitParams_c *fn_82866218(R1::Soundscape::WwiseInitParams_c *self, unsigned int flags)
{
    self->R1::Soundscape::WwiseInitParams_c::~WwiseInitParams_c();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
