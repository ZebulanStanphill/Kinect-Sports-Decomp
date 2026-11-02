// R1::Soundscape::WwiseEmitter_InfiniteLine_c constructor: a point on the line and its direction.
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

WwiseEmitter_InfiniteLine_c::WwiseEmitter_InfiniteLine_c(const AudioVariant_c &variant, unsigned int unk,
                                                         const Element_82834F10 &position, const Element_82834F10 &direction)
    : WwiseEmitterPositionable_c(variant, unk, position), unkF4(direction)
{
}

} // namespace Soundscape
} // namespace R1
