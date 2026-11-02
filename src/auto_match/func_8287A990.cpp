#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf34(const AudioVariant_c & a, AudioVariant_c *b)
{
    WwiseEmitter_c *e = &emitter;
    return e->evf34(a, b);
}

} // namespace Soundscape
} // namespace R1
