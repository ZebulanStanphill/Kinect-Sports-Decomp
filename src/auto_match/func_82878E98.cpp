#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

namespace R1 {
namespace Soundscape {

int WwiseEmitter_c::evf14(unsigned int *a)
{
    fn_82878E10(this, *a);
    WwiseEventContext_c *c = &context;
    return c->vf0C((unsigned int)a, (unsigned int)this);
}

} // namespace Soundscape
} // namespace R1
