#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitter_c::evf28(unsigned int a, unsigned int b)
{
    RTPCStrategy_i *r = &rtpc;
    return r->vf00(a, b, this);
}

} // namespace Soundscape
} // namespace R1
