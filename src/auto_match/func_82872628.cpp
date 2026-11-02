// R1::Soundscape::WwiseEmitterFactory_c::vf20: creates a WwiseEmitter_Path_c.
#include <vector>

#include "R1/Soundscape/WwiseEmitterFactory.h"

namespace R1 {
namespace Soundscape {

Emitter_i *WwiseEmitterFactory_c::vf20(const AudioVariant_c &variant, unsigned int unk,
                                      const std::vector<Element_828729F8> &points, bool closed, bool unk105)
{
    return Register(new WwiseEmitter_Path_c(variant, unk, points, closed, unk105));
}

} // namespace Soundscape
} // namespace R1
