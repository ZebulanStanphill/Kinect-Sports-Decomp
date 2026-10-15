#include "R1/Soundscape/EventHandleState.h"
#include "R1/Soundscape/EventHandleContext.h"

namespace R1 {
namespace Soundscape {

unsigned int EventHandleContext_c::vf00()
{
    return state->vf00(this);
}

} // namespace Soundscape
} // namespace R1
