// R1::Soundscape::ReverbEmitterControl_c constructor: unk08 starts at -96.0f
// (lbl_8201FBC8), the dirty flag is set and the vector reserves 4 elements.
#include <vector>

#include "R1/Soundscape/WwiseEmitter.h"

// Defined here (selectany, as the real constant) so that the compiler knows its
// value and loads it before the stores, as the original does.
extern "C" __declspec(selectany) const float lbl_8201FBC8 = -96.0f;

namespace R1 {
namespace Soundscape {

ReverbEmitterControl_c::ReverbEmitterControl_c()
    : unk04(0), unk08(lbl_8201FBC8), unk0C(true)
{
    fn_82878698(&unk10, 4);
}

} // namespace Soundscape
} // namespace R1
