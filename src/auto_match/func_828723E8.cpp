// R1::Soundscape::WwiseEmitterFactory_c::vf1C: creates a WwiseEmitter_BoundingBox_c (its constructor is inlined).
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

namespace R1 {
namespace Soundscape {

Emitter_i *WwiseEmitterFactory_c::vf1C(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                                      const Element_82834F10 &a, const Element_82834F10 &b, float angle)
{
    return Register(new WwiseEmitter_BoundingBox_c(variant, unk, position, a, b, angle));
}

} // namespace Soundscape
} // namespace R1
