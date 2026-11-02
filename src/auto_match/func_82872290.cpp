// R1::Soundscape::WwiseEmitterFactory_c::vf14: creates a WwiseEmitter_Sphere_c (its constructor is inlined).
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

namespace R1 {
namespace Soundscape {

Emitter_i *WwiseEmitterFactory_c::vf14(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                                      float radius)
{
    return Register(new WwiseEmitter_Sphere_c(variant, unk, position, radius));
}

} // namespace Soundscape
} // namespace R1
