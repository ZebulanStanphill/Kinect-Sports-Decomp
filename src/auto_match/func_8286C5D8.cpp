#include "R1/Soundscape/ListenerBias.h"

extern "C" {
void *memcpy(void *dst, const void *src, unsigned int size);
extern const R1::Soundscape::ListenerBias_t lbl_820214B4;
}

namespace R1 {
namespace Soundscape {

unsigned int ListenerBias_FULL_c::vf00(ListenerBiasContext_c *context, unsigned int listener, ListenerBias_t *output,
                       unsigned int count)
{
    memcpy(output, &lbl_820214B4, sizeof(*output));
    return 0x20280000;
}

} // namespace Soundscape
} // namespace R1
