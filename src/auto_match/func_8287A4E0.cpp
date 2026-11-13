// R1::Soundscape::Maths::mathSpring_c's constructor.
#include "R1/Soundscape/Maths/Spring.h"

namespace R1 {
namespace Soundscape {
namespace Maths {

mathSpring_c::mathSpring_c(const AudioVariant_c &name, float position, float target, float stiffness)
    : mathSpringBase_c(name, position, target, stiffness)
{
}

} // namespace Maths
} // namespace Soundscape
} // namespace R1
