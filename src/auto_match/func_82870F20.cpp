#include "R1/Soundscape/EventHandleContext.h"

extern "C" {
void *fn_828684F8();
}

namespace R1 {
namespace Soundscape {

unsigned int EventHandleContext_c::vf1C()
{
    fn_828684F8();
    unk44 = false;
    unsigned int result = fn_82870D90();
    fn_828684F8();
    return result;
}

} // namespace Soundscape
} // namespace R1
