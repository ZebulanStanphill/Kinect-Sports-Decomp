// R1::Soundscape::Maths::mathSpring_c slot 0x34: one spring step. With the
// distance limit on, a distance beyond the limits moves the position by the
// excess; with the target limit on, the target is clamped.
#include "R1/Soundscape/Maths/Spring.h"

namespace R1 {
namespace Soundscape {
namespace Maths {

float mathSpring_c::vf34(float dt)
{
    float delta = unk08 - unk04;
    float clamped = delta;
    if (unk1C == 1) {
        if (delta < unk18) {
            clamped = unk18;
        } else if (delta > unk14) {
            clamped = unk14;
        }
        if (fn_82809CB0(clamped) < fn_82809CB0(delta)) {
            unk04 += delta - clamped;
        }
    }
    if (unk28 == 1) {
        float target = unk08;
        if (target < unk20) {
            target = unk20;
        } else if (target > unk24) {
            target = unk24;
        }
        unk08 = target;
    }
    float old = unk04;
    float r = fn_82879EB0(&unk04, unk08, &unk0C, unk10, unk10 * 2.0f, dt, unk30);
    unk2C = unk04 - old;
    return r;
}

} // namespace Maths
} // namespace Soundscape
} // namespace R1
