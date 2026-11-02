#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

float WwiseEmitter_c::evf64()
{
    return fn_828776E8(&reverb);
}

} // namespace Soundscape
} // namespace R1
