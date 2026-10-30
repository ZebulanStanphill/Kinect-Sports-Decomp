extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class BankEntry_TRIGGER_UNLOAD_c { public: virtual ~BankEntry_TRIGGER_UNLOAD_c() {} }; } } 
extern "C" R1::Soundscape::BankEntry_TRIGGER_UNLOAD_c *fn_82868998(R1::Soundscape::BankEntry_TRIGGER_UNLOAD_c *self, unsigned int flags)
{
    self->R1::Soundscape::BankEntry_TRIGGER_UNLOAD_c::~BankEntry_TRIGGER_UNLOAD_c();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
