// R1::Soundscape::WwiseEmitter_Path_c::vf8C: finds the point of the path
// nearest the listener (in the horizontal plane if unk105) and moves unk108
// a step towards it. The float constants are literals: the renames
// lbl_82005C88=__real@7f7fffff, lbl_8202236C=__real@3da3d70a and
// lbl_8201DCB8=__real@3727c5ac (only NonMatching units use them) let the
// compiler keep them in registers across the calls, as the original does.
#include <vector>

#include "R1/Soundscape/WwiseEmitterPositionable.h"

extern "C" {
// The point of the segment a-b nearest *point.
void fn_8306B110(const Element_82834F10 *point, const Element_82834F10 *a, const Element_82834F10 *b,
                 Element_82834F10 *out);
float fn_82809CB0(float x);       // absolute value
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

int WwiseEmitter_Path_c::vf8C(const Element_82834F10 &listener, std::vector<Element_82834F10> *points)
{
    float best = 3.402823466e+38f; // FLT_MAX
    unk114 = (const Element_82834F10 &)unkF4[0];
    for (unsigned int i = 0; i < unkF4.size() - 1; i++) {
        Element_82834F10 a = (const Element_82834F10 &)unkF4[i];
        Element_82834F10 b = (const Element_82834F10 &)unkF4[i + 1];
        Element_82834F10 p = listener;
        if (unk105) {
            a.y = 0.0f;
            b.y = 0.0f;
            p.y = 0.0f;
        }
        Element_82834F10 nearest;
        fn_8306B110(&p, &a, &b, &nearest);
        float distance = (p.x - nearest.x) * (p.x - nearest.x) + (p.y - nearest.y) * (p.y - nearest.y) +
                         (p.z - nearest.z) * (p.z - nearest.z);
        if (distance < best) {
            best = distance;
            unk114 = nearest;
        }
    }
    float step = (unk114.x - unk108.x) * 0.08f;
    if (fn_82809CB0(step) < 0.00001f)
        unk108.x += step;
    step = (unk114.y - unk108.y) * 0.08f;
    if (fn_82809CB0(step) < 0.00001f)
        unk108.y += step;
    step = (unk114.z - unk108.z) * 0.08f;
    if (fn_82809CB0(step) < 0.00001f)
        unk108.z += step;
    points->push_back(unk108);
    return 0x201C0000;
}

} // namespace Soundscape
} // namespace R1
