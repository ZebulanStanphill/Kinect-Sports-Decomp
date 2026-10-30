extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class ListenerFactory_i { public: virtual ~ListenerFactory_i() {} }; } } 
extern "C" R1::Soundscape::ListenerFactory_i *fn_82864AE8(R1::Soundscape::ListenerFactory_i *self, unsigned int flags)
{
    self->R1::Soundscape::ListenerFactory_i::~ListenerFactory_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
