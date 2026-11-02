#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitter_c::evf48(unsigned int a)
{
    if (unk54 != 0)
        return 0xA0200000;
    unk54 = a;
    return 0x20200000;
}

} // namespace Soundscape
} // namespace R1
