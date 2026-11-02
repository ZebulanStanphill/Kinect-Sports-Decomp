#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf10(unsigned int a, unsigned int b)
{
    WwiseEmitter_c *e = &emitter;
    return e->evf10(a, b);
}

} // namespace Soundscape
} // namespace R1
