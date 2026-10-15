#include "R1/Soundscape/EventHandleState.h"
#include "R1/Soundscape/EventHandleContext.h"

extern "C" {
void *fn_828684F8();
void fn_82FE7F58(unsigned int playingId);
}

namespace R1 {
namespace Soundscape {

unsigned int EventHandle_PLAYING_c::vf00(EventHandleContext_c *context)
{
    fn_828684F8();
    vf08(context);
    fn_82FE7F58(context->unk40);
    fn_828684F8();
    return 0x201E0000;
}

} // namespace Soundscape
} // namespace R1
