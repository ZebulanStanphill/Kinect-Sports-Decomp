// R1::Soundscape::WwiseEmitterFactory_c::vf18: creates a WwiseEmitter_AxisAlignedBoundingBox_c.
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

namespace R1 {
namespace Soundscape {

Emitter_i *WwiseEmitterFactory_c::vf18(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                                      const Element_82834F10 &a, const Element_82834F10 &b)
{
    return Register(new WwiseEmitter_AxisAlignedBoundingBox_c(variant, unk, position, a, b));
}

} // namespace Soundscape
} // namespace R1
