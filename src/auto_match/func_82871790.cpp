// R1::Soundscape::WwiseEmitter_Line_c constructor: start, direction and length.
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

namespace R1 {
namespace Soundscape {

WwiseEmitter_Line_c::WwiseEmitter_Line_c(const AudioVariant_c &variant, unsigned int unk, const Element_82834F10 &position,
                                         const Element_82834F10 &direction, float length)
    : WwiseEmitterPositionable_c(variant, unk, position), unkF4(direction), unk100(length)
{
}

} // namespace Soundscape
} // namespace R1
