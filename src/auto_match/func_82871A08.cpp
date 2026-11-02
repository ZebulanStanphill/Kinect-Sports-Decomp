// R1::Soundscape::WwiseEmitter_AxisAlignedBoundingBox_c constructor: two corners.
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

WwiseEmitter_AxisAlignedBoundingBox_c::WwiseEmitter_AxisAlignedBoundingBox_c(const AudioVariant_c &variant, unsigned int unk,
                                                                             const Element_82834F10 &position,
                                                                             const Element_82834F10 &a, const Element_82834F10 &b)
    : WwiseEmitterPositionable_c(variant, unk, position), unkF4(a), unk100(b)
{
}

} // namespace Soundscape
} // namespace R1
