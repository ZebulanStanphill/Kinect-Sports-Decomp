#include "R1/Soundscape/BankEntryState.h"

namespace R1 {
namespace Soundscape {

void BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c::vf00(BankEntryContext_c *context)
{
    context->unk2C = 1;
}

} // namespace Soundscape
} // namespace R1
