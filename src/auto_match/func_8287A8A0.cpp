#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf0C(unsigned int a)
{
    WwiseEmitter_c *e = &emitter;
    return e->evf0C(a);
}

} // namespace Soundscape
} // namespace R1
