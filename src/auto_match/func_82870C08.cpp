#include "R1/Soundscape/EventHandleState.h"
#include "R1/Soundscape/EventHandleContext.h"

namespace R1 {
namespace Soundscape {

float EventHandle_STOPPED_c::vf08(EventHandleContext_c *context)
{
    return context->unk64;
}

} // namespace Soundscape
} // namespace R1
