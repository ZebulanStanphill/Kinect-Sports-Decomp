extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c { public: virtual ~BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c() {} }; } } 
extern "C" R1::Soundscape::BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c *fn_828689E0(R1::Soundscape::BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c *self, unsigned int flags)
{
    self->R1::Soundscape::BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c::~BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
