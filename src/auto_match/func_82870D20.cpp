#include "R1/Soundscape/EventHandleContext.h"

extern "C" {
void *fn_828684F8();
void *fn_82868568();
void fn_82871318(void *unk, R1::Soundscape::EventHandleContext_c *context);
void fn_82864898(void *unk);
}

namespace R1 {
namespace Soundscape {

EventHandleContext_c::~EventHandleContext_c()
{
    fn_82871318(fn_82868568(), this);
    unk74 = true;
    fn_828684F8();
    unk75 = true;
    fn_82864898(unk18);
}

} // namespace Soundscape
} // namespace R1
