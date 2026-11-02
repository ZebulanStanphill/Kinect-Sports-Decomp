#include "R1/Soundscape/WwiseEventContext.h"

namespace R1 {
namespace Soundscape {

// WwiseEmitter_c's constructor passes the WwiseEventInitialising_c singleton.
WwiseEventContext_c::WwiseEventContext_c(WwiseEventState_c *state)
    : state(state)
{
}

} // namespace Soundscape
} // namespace R1
