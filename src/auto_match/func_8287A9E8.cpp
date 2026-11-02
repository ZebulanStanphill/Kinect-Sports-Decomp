#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

AudioVariant_c WwiseEmitterPositionable_c::evf44()
{
    WwiseEmitter_c *e = &emitter;
    return e->evf44();
}

} // namespace Soundscape
} // namespace R1
