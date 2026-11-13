// R1::Soundscape::Maths::mathSpringBase_c's constructor: position, target and
// stiffness from the arguments, the rest cleared, no limits.
#include <float.h>

#include "R1/Soundscape/Maths/Spring.h"

namespace R1 {
namespace Soundscape {
namespace Maths {

mathSpringBase_c::mathSpringBase_c(const AudioVariant_c &name, float position, float target, float stiffness)
    : unk04(position), unk08(target), unk0C(0.0f), unk10(stiffness), unk14(0.0f), unk18(0.0f), unk1C(0),
      unk20(0.0f), unk24(0.0f), unk28(0), unk2C(0.0f), unk30(FLT_MAX), unk34(name)
{
}

} // namespace Maths
} // namespace Soundscape
} // namespace R1
