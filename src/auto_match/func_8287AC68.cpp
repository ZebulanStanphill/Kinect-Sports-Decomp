// R1::Soundscape::WwiseEmitterPositionable_c constructor: the embedded
// WwiseEmitter_c, the position (also the previous position), an empty vector
// of points with room for 4, and the other vectors from lbl_821CA1A0.
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

extern "C" const Element_82834F10 lbl_821CA1A0;

// Called out of line (func_82834F10).
template <> void std::vector<Element_82834F10>::reserve(size_type count);

namespace R1 {
namespace Soundscape {

WwiseEmitterPositionable_c::WwiseEmitterPositionable_c(const AudioVariant_c &variant, unsigned int unk,
                                                       const Element_82834F10 &position)
    : emitter(variant, unk), unk90(position), unk9C(position), unkB8(lbl_821CA1A0), unkC4(lbl_821CA1A0),
      unkD0(lbl_821CA1A0), unkDC(lbl_821CA1A0)
{
    unkE8.x = 0.0f;
    unkE8.y = 0.0f;
    unkE8.z = 0.0f;
    unkA8.reserve(4);
}

} // namespace Soundscape
} // namespace R1
