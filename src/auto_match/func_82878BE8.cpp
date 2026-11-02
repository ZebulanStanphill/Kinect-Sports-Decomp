#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitter_c::evf1C(unsigned int a, unsigned int b)
{
    WwiseEventContext_c *c = &context;
    return c->vf14(a, b, (unsigned int)this);
}

} // namespace Soundscape
} // namespace R1
