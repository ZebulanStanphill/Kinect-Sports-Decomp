#include "R1/Soundscape/EventHandleContext.h"

extern "C" {
void *fn_828684F8();
void RtlEnterCriticalSection(void *criticalSection);
void RtlLeaveCriticalSection(void *criticalSection);
}

namespace R1 {
namespace Soundscape {

unsigned int EventHandleContext_c::fn_82870D90()
{
    fn_828684F8();
    if (!unk45) {
        RtlEnterCriticalSection(unk48);
        unk45 = true;
        RtlLeaveCriticalSection(unk48);
        fn_828684F8();
    }
    return 0x201D0000;
}

} // namespace Soundscape
} // namespace R1
