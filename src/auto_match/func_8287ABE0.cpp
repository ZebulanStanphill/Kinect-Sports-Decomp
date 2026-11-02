#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf60(float a)
{
    WwiseEmitter_c *e = &emitter;
    return e->evf60(a);
}

} // namespace Soundscape
} // namespace R1
