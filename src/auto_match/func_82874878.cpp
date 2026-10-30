extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class Listener_i { public: virtual ~Listener_i() {} }; } } 
extern "C" R1::Soundscape::Listener_i *fn_82874878(R1::Soundscape::Listener_i *self, unsigned int flags)
{
    self->R1::Soundscape::Listener_i::~Listener_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
