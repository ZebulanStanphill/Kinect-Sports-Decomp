#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitterPositionable_c::evf5C(const AudioVariant_c & a)
{
    WwiseEmitter_c *e = &emitter;
    return e->evf5C(a);
}

} // namespace Soundscape
} // namespace R1
