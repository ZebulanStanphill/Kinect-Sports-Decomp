extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class EmitterObserver_i { public: virtual ~EmitterObserver_i() {} }; } } 
extern "C" R1::Soundscape::EmitterObserver_i *fn_8287BC58(R1::Soundscape::EmitterObserver_i *self, unsigned int flags)
{
    self->R1::Soundscape::EmitterObserver_i::~EmitterObserver_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
