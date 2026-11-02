// R1::Soundscape::WwiseEmitterFactory_c::vf10: creates a WwiseEmitter_Point_c (its constructor is inlined).
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

namespace R1 {
namespace Soundscape {

Emitter_i *WwiseEmitterFactory_c::vf10(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                                      const Element_82834F10 &v)
{
    return Register(new WwiseEmitter_Point_c(variant, unk, position, v));
}

} // namespace Soundscape
} // namespace R1
