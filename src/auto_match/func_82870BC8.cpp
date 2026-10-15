#include "R1/Soundscape/EventHandleState.h"

namespace R1 {
namespace Soundscape {

unsigned int EventHandle_STOPPED_c::vf00(EventHandleContext_c *)
{
    return 0x201E0000;
}

} // namespace Soundscape
} // namespace R1
