extern "C" void fn_8265CA20(void *p);
namespace R1 { namespace Soundscape { class EventHandleState_i { public: virtual ~EventHandleState_i() {} }; } } 
extern "C" R1::Soundscape::EventHandleState_i *fn_82866180(R1::Soundscape::EventHandleState_i *self, unsigned int flags)
{
    self->R1::Soundscape::EventHandleState_i::~EventHandleState_i();
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
