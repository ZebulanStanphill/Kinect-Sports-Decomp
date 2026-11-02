// The deleting destructor of WwiseEmitter_AxisAlignedBoundingBox_c and WwiseEmitter_BoundingBox_c: the
// linker folded the two identical functions, so it keeps its fn_ name (it is written for the box).
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

extern "C" R1::Soundscape::WwiseEmitter_AxisAlignedBoundingBox_c *fn_82871AD0(
    R1::Soundscape::WwiseEmitter_AxisAlignedBoundingBox_c *self, unsigned int flags)
{
    self->R1::Soundscape::WwiseEmitter_AxisAlignedBoundingBox_c::~WwiseEmitter_AxisAlignedBoundingBox_c();
    if (flags & 1)
        R1::Soundscape::WwiseEmitter_AxisAlignedBoundingBox_c::operator delete(self);
    return self;
}
