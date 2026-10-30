extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { namespace Maths { class Spring_i { public: virtual ~Spring_i() {} }; } } } 
extern "C" R1::Soundscape::Maths::Spring_i *fn_82879E50(R1::Soundscape::Maths::Spring_i *self, unsigned int flags)
{
    self->R1::Soundscape::Maths::Spring_i::~Spring_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
