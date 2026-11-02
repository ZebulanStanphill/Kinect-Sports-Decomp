// WwiseEmitter_Point_c::vf8C: the shape's only point is its position.
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

extern "C" {
const Element_82834F10 *fn_8287AB90(const void *self); // WwiseEmitterPositionable_c: &unk90
void fn_82835208(void *self, const Element_82834F10 *value);
}

// push_back is folded (ICF, 13 users): keep fn_82835208.
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

namespace R1 {
namespace Soundscape {

int WwiseEmitter_Point_c::vf8C(const Element_82834F10 &listener, std::vector<Element_82834F10> *points)
{
    points->push_back(*fn_8287AB90(this));
    return 0x20180000;
}

} // namespace Soundscape
} // namespace R1
