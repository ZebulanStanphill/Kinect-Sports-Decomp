#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf20()
{
    WwiseEmitter_c *e = &emitter;
    return e->evf20();
}

} // namespace Soundscape
} // namespace R1
