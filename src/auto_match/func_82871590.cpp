// R1::Soundscape::WwiseEmitter_Plane_c constructor: the position and the plane's normal.
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

WwiseEmitter_Plane_c::WwiseEmitter_Plane_c(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                                           const Element_82834F10 &normal)
    : WwiseEmitterPositionable_c(variant, unk, position), unkF4(normal)
{
}

} // namespace Soundscape
} // namespace R1
