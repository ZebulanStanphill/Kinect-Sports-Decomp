#include "R1/Soundscape/WwiseEventContext.h"

namespace R1 {
namespace Soundscape {

int WwiseEventContext_c::vf04(unsigned int unk1, unsigned int unk2, unsigned int unk3)
{
    return state->vf00(this, unk1, unk2, unk3);
}

} // namespace Soundscape
} // namespace R1
