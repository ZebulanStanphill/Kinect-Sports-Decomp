#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitter_c::evf5C(const AudioVariant_c &a)
{
    return fn_82877DD8(&reverb, &a);
}

} // namespace Soundscape
} // namespace R1
