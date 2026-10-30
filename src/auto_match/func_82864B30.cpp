extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class ReverbFactory_i { public: virtual ~ReverbFactory_i() {} }; } } 
extern "C" R1::Soundscape::ReverbFactory_i *fn_82864B30(R1::Soundscape::ReverbFactory_i *self, unsigned int flags)
{
    self->R1::Soundscape::ReverbFactory_i::~ReverbFactory_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
