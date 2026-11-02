#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf1C(unsigned int a, unsigned int b)
{
    WwiseEmitter_c *e = &emitter;
    return e->evf1C(a, b);
}

} // namespace Soundscape
} // namespace R1
