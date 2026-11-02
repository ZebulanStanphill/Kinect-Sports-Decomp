#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf18(unsigned int a)
{
    WwiseEmitter_c *e = &emitter;
    return e->evf18(a);
}

} // namespace Soundscape
} // namespace R1
