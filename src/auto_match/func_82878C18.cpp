#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitter_c::evf20()
{
    WwiseEventContext_c *c = &context;
    return c->vf1C((unsigned int)this);
}

} // namespace Soundscape
} // namespace R1
