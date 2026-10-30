extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class EmitterFactory_i { public: virtual ~EmitterFactory_i() {} }; } } 
extern "C" R1::Soundscape::EmitterFactory_i *fn_82864A58(R1::Soundscape::EmitterFactory_i *self, unsigned int flags)
{
    self->R1::Soundscape::EmitterFactory_i::~EmitterFactory_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
