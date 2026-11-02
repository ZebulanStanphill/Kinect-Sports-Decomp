#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

float WwiseEmitterPositionable_c::evf64()
{
    WwiseEmitter_c *e = &emitter;
    return e->evf64();
}

} // namespace Soundscape
} // namespace R1
