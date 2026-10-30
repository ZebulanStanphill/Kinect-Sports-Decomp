extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { namespace Maths { class SpringFactory_i { public: virtual ~SpringFactory_i() {} }; } } } 
extern "C" R1::Soundscape::Maths::SpringFactory_i *fn_8286D4E0(R1::Soundscape::Maths::SpringFactory_i *self, unsigned int flags)
{
    self->R1::Soundscape::Maths::SpringFactory_i::~SpringFactory_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
