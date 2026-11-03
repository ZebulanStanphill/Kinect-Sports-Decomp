#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

float WwiseEmitter_c::evf64()
{
    return reverb.fn_828776E8();
}

} // namespace Soundscape
} // namespace R1
