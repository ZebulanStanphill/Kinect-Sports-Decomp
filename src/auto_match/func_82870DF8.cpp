#include "R1/Soundscape/EventHandleContext.h"

extern "C" {
void *fn_828684F8();
}

namespace R1 {
namespace Soundscape {

unsigned int EventHandleContext_c::vf24(EventHandleState_i *state)
{
    fn_828684F8();
    if (this->state != state) {
        this->state = state;
    }
    fn_828684F8();
    return 0x201D0000;
}

} // namespace Soundscape
} // namespace R1
