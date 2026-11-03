#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

int ReverbEmitterControl_c::fn_828776C8(float a)
{
    if (a != unk08) {
        unk0C = true;
    }
    unk08 = a;
    return 0x20340000;
}

} // namespace Soundscape
} // namespace R1
