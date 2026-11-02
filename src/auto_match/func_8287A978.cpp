#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf30(const AudioVariant_c & a, const AudioVariant_c & b)
{
    WwiseEmitter_c *e = &emitter;
    return e->evf30(a, b);
}

} // namespace Soundscape
} // namespace R1
