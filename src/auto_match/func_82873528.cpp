// R1::Soundscape::WwiseEmitter_BoundingBox_c::vf8C: the listener's offset
// rotated by the box's angle (about y), then the axis-aligned box's vf8C.
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

extern "C" {
float fn_82809950(float angle);                                                   // cosine
float fn_82809868(float angle);                                                   // sine
void fn_828105C8(Element_82834F10 *self, float x, float y, float z);             // 3-float vector constructor
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


namespace R1 {
namespace Soundscape {

int WwiseEmitter_BoundingBox_c::vf8C(const Element_82834F10 &listener, std::vector<Element_82834F10> *points)
{
    float c = fn_82809950(unk10C);
    float s = fn_82809868(unk10C);
    Element_82834F10 axisZ;
    fn_828105C8(&axisZ, s, 0.0f, c);
    Element_82834F10 axisX;
    fn_828105C8(&axisX, -axisZ.z, 0.0f, axisZ.x);
    Element_82834F10 offset;
    offset = listener - *fn_8287AB90(this);
    float x = Dot(offset, axisX);
    Element_82834F10 local;
    fn_828105C8(&local, Dot(offset, axisZ), 0.0f, x);
    return WwiseEmitter_AxisAlignedBoundingBox_c::vf8C(local, points);
}

} // namespace Soundscape
} // namespace R1
