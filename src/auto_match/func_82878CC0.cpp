#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitter_c::evf50(unsigned int *a)
{
    if (unk54 == 0) {
        *a = 0;
        return 0xA0200000;
    }
    *a = unk54;
    unk54 = 0;
    return 0x20200000;
}

} // namespace Soundscape
} // namespace R1
