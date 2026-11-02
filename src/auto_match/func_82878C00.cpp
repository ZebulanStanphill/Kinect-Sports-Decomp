#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitter_c::evf24(unsigned int a)
{
    WwiseEventContext_c *c = &context;
    return c->vf18(a, (unsigned int)this);
}

} // namespace Soundscape
} // namespace R1
