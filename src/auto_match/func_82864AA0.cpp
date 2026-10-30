extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class EmitterFireAndForgetFactory_i { public: virtual ~EmitterFireAndForgetFactory_i() {} }; } } 
extern "C" R1::Soundscape::EmitterFireAndForgetFactory_i *fn_82864AA0(R1::Soundscape::EmitterFireAndForgetFactory_i *self, unsigned int flags)
{
    self->R1::Soundscape::EmitterFireAndForgetFactory_i::~EmitterFireAndForgetFactory_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
