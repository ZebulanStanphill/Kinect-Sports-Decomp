// R1::Soundscape::WwiseEmitterFactory_c::vf08: creates a WwiseEmitter_InfiniteLine_c.
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

namespace R1 {
namespace Soundscape {

Emitter_i *WwiseEmitterFactory_c::vf08(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                                      const Element_82834F10 &direction)
{
    return Register(new WwiseEmitter_InfiniteLine_c(variant, unk, position, direction));
}

} // namespace Soundscape
} // namespace R1
