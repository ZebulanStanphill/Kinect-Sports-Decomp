// R1::Soundscape::WwiseEmitterFactory_c::vf04: creates a WwiseEmitter_Plane_c.
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

namespace R1 {
namespace Soundscape {

Emitter_i *WwiseEmitterFactory_c::vf04(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                                      const Element_82834F10 &normal)
{
    return Register(new WwiseEmitter_Plane_c(variant, unk, position, normal));
}

} // namespace Soundscape
} // namespace R1
