// R1::Soundscape::ReverbEntry_c constructor (variant, flag, gain). Its caller
// (func_82878010) is still C, so it keeps its fn_ name.
#include "R1/Soundscape/ReverbEntry.h"

using namespace R1::Soundscape;

extern "C" ReverbEntry_c *fn_82877938(ReverbEntry_c *self, const AudioVariant_c &v, unsigned char flag,
                                      float gain)
{
    self->ReverbEntry_c::ReverbEntry_c(v, flag, gain);
    return self;
}
