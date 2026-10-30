extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class BankFactory_i { public: virtual ~BankFactory_i() {} }; } } 
extern "C" R1::Soundscape::BankFactory_i *fn_82864A10(R1::Soundscape::BankFactory_i *self, unsigned int flags)
{
    self->R1::Soundscape::BankFactory_i::~BankFactory_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
