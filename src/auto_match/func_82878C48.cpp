#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitter_c::evf2C(unsigned int a, unsigned int b)
{
    RTPCStrategy_i *r = &rtpc;
    return r->vf04(a, b, this);
}

} // namespace Soundscape
} // namespace R1
