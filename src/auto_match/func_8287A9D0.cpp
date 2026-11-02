#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf00()
{
    WwiseEmitter_c *e = &emitter;
    return e->evf00();
}

} // namespace Soundscape
} // namespace R1
