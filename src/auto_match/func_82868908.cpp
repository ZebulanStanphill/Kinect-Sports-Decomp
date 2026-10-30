extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class BankEntry_LOADED_c { public: virtual ~BankEntry_LOADED_c() {} }; } } 
extern "C" R1::Soundscape::BankEntry_LOADED_c *fn_82868908(R1::Soundscape::BankEntry_LOADED_c *self, unsigned int flags)
{
    self->R1::Soundscape::BankEntry_LOADED_c::~BankEntry_LOADED_c();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
