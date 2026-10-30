extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class Emitter_i { public: virtual ~Emitter_i() {} }; } } 
extern "C" R1::Soundscape::Emitter_i *fn_82878AF8(R1::Soundscape::Emitter_i *self, unsigned int flags)
{
    self->R1::Soundscape::Emitter_i::~Emitter_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
