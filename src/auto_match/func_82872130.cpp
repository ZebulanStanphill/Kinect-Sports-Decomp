// R1::Soundscape::WwiseEmitterFactory_c::vf0C: creates a WwiseEmitter_Line_c.
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

namespace R1 {
namespace Soundscape {

Emitter_i *WwiseEmitterFactory_c::vf0C(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                                      const Element_82834F10 &direction, float length)
{
    return Register(new WwiseEmitter_Line_c(variant, unk, position, direction, length));
}

} // namespace Soundscape
} // namespace R1
