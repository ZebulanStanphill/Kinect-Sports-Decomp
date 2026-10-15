#include "R1/Soundscape/EventHandleContext.h"

extern "C" {
void fn_8257A9F0(void *unk, R1::Soundscape::EventHandleContext_c **context);
}

extern "C" R1::Soundscape::EventHandleContext_c *fn_82870E48(void *unk)
{
    R1::Soundscape::EventHandleContext_c *context = new R1::Soundscape::EventHandleContext_c;
    if (context != 0) {
        fn_8257A9F0(unk, &context);
    }
    return context;
}
