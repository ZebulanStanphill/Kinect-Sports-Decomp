// R1::Soundscape::WwiseEmitterFactory_c::vf00: creates a WwiseEmitter_c (no position).
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

namespace R1 {
namespace Soundscape {

Emitter_i *WwiseEmitterFactory_c::vf00(const AudioVariant_c &variant, unsigned int unk)
{
    return Register(new WwiseEmitter_c(variant, unk));
}

} // namespace Soundscape
} // namespace R1
