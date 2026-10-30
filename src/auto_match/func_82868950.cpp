extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class BankEntry_LOAD_FAILED_c { public: virtual ~BankEntry_LOAD_FAILED_c() {} }; } } 
extern "C" R1::Soundscape::BankEntry_LOAD_FAILED_c *fn_82868950(R1::Soundscape::BankEntry_LOAD_FAILED_c *self, unsigned int flags)
{
    self->R1::Soundscape::BankEntry_LOAD_FAILED_c::~BankEntry_LOAD_FAILED_c();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
