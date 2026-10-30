extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class BankEntry_UNLOADED_c { public: virtual ~BankEntry_UNLOADED_c() {} }; } } 
extern "C" R1::Soundscape::BankEntry_UNLOADED_c *fn_82868A28(R1::Soundscape::BankEntry_UNLOADED_c *self, unsigned int flags)
{
    self->R1::Soundscape::BankEntry_UNLOADED_c::~BankEntry_UNLOADED_c();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
