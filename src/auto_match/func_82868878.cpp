extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class BankEntry_TRIGGER_LOAD_c { public: virtual ~BankEntry_TRIGGER_LOAD_c() {} }; } } 
extern "C" R1::Soundscape::BankEntry_TRIGGER_LOAD_c *fn_82868878(R1::Soundscape::BankEntry_TRIGGER_LOAD_c *self, unsigned int flags)
{
    self->R1::Soundscape::BankEntry_TRIGGER_LOAD_c::~BankEntry_TRIGGER_LOAD_c();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
