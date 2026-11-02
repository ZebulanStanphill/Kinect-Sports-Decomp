// R1::Soundscape::WwiseEmitter_AxisAlignedBoundingBox_c::vf8C: the point of
// the box nearest the listener (each coordinate clamped between the corners).
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

extern "C" {
const Element_82834F10 *fn_8287AB90(const void *self); // WwiseEmitterPositionable_c: &unk90
void fn_82835208(void *self, const Element_82834F10 *value);
}

template <>
__forceinline void std::vector<Element_82834F10>::push_back(const Element_82834F10 &value)
{
    fn_82835208(this, &value);
}

template <>
__forceinline void std::vector<Element_82834F10>::push_back(Element_82834F10 &&value)
{
    fn_82835208(this, &value);
}


// Function-like macros: each argument is evaluated again for the result.
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

namespace R1 {
namespace Soundscape {

int WwiseEmitter_AxisAlignedBoundingBox_c::vf8C(const Element_82834F10 &listener,
                                                std::vector<Element_82834F10> *points)
{
    Element_82834F10 nearest;
    Element_82834F10 position = *fn_8287AB90(this);
    Element_82834F10 hi;
    Element_82834F10 lo;
    lo = position + unkF4;
    hi = position + unk100;
    nearest.x = MAX(MIN(listener.x, hi.x), lo.x);
    nearest.y = MAX(MIN(listener.y, hi.y), lo.y);
    nearest.z = MAX(MIN(listener.z, hi.z), lo.z);
    points->push_back(nearest);
    return 0x201A0000;
}

} // namespace Soundscape
} // namespace R1
