extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class EventHandleContext_i { public: virtual ~EventHandleContext_i() {} }; } } 
extern "C" R1::Soundscape::EventHandleContext_i *fn_82870A58(R1::Soundscape::EventHandleContext_i *self, unsigned int flags)
{
    self->R1::Soundscape::EventHandleContext_i::~EventHandleContext_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
