#include "R1/Soundscape/EventHandleState.h"
#include "R1/Soundscape/EventHandleContext.h"

struct Unk_82866400 {
    char unk00[0x14];
    unsigned int unk14; // Number of contexts created
};

extern "C" {
void *fn_828684F8();
void *fn_82865170();
Unk_82866400 *fn_82866400(void *unk);
void fn_82864988(void *unk, const char *name);
void RtlInitializeCriticalSection(void *criticalSection);
}

namespace R1 {
namespace Soundscape {

EventHandleContext_c::EventHandleContext_c()
{
    unk04[0] = 0xDEADBEEF;
    unk04[1] = 0xDEADBEEF;
    unk04[2] = 0xDEADBEEF;
    unk04[3] = 0xDEADBEEF;
    state = Singleton_c<EventHandle_EMITTER_INVALIDATED_c>::GetInstance();
    fn_82864988(unk18, "NOT_FINALISED");
    unk3C = true;
    unk3D = false;
    unk40 = 0;
    unk44 = false;
    unk45 = false;
    unk64 = 0.0f;
    unk68 = false;
    unk6C = 0.0f;
    unk70 = 0.0f;
    unk74 = false;
    unk75 = false;
    RtlInitializeCriticalSection(unk48);
    ++fn_82866400(fn_82865170())->unk14;
    fn_828684F8();
}

} // namespace Soundscape
} // namespace R1
