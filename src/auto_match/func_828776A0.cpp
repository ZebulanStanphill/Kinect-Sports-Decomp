#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

int ReverbEmitterControl_c::fn_828776A0(unsigned char a)
{
    if (unk04 != a) {
        unk0C = true;
    }
    unk04 = a;
    return 0x20340000;
}

} // namespace Soundscape
} // namespace R1
