#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf48(unsigned int a)
{
    WwiseEmitter_c *e = &emitter;
    return e->evf48(a);
}

} // namespace Soundscape
} // namespace R1
