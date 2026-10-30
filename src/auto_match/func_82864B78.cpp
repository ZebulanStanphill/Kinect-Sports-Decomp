extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class Soundscape_i { public: virtual ~Soundscape_i() {} }; } } 
extern "C" R1::Soundscape::Soundscape_i *fn_82864B78(R1::Soundscape::Soundscape_i *self, unsigned int flags)
{
    self->R1::Soundscape::Soundscape_i::~Soundscape_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
