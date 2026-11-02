// R1::Soundscape::WwiseEmitter_Path_c constructor: positioned at
// lbl_821CA1A0, copies the points (the vector copy constructor is out of
// line, func_82872EC8); a closed path gets its first point appended again.
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

extern "C" {
extern const Element_82834F10 lbl_821CA1A0;
void fn_82835208(void *self, const void *value);
}

template <> std::vector<Element_828729F8>::vector(const std::vector<Element_828729F8> &right);

// push_back is folded (ICF) across element types (13 calling units): keep fn_82835208.
template <>
__forceinline void std::vector<Element_828729F8>::push_back(const Element_828729F8 &value)
{
    fn_82835208(this, &value);
}

namespace R1 {
namespace Soundscape {

WwiseEmitter_Path_c::WwiseEmitter_Path_c(const AudioVariant_c &variant, unsigned int unk,
                                         const std::vector<Element_828729F8> &points, bool closed, bool unk105)
    : WwiseEmitterPositionable_c(variant, unk, lbl_821CA1A0), unkF4(points), unk104(closed), unk105(unk105),
      unk108((const Element_82834F10 &)points[0]), unk114((const Element_82834F10 &)points[0])
{
    if (closed)
        unkF4.push_back(unkF4[0]);
}

} // namespace Soundscape
} // namespace R1
