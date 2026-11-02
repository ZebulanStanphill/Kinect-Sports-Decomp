#include "R1/Soundscape/BankEntryState.h"

namespace R1 {
namespace Soundscape {

void BankEntry_UNLOADED_c::vf08(BankEntryContext_c *context)
{
    if (context->unk2C == 1) {
        context->unk2C = 0;
        context->SetState(Singleton_c<BankEntry_TRIGGER_LOAD_c>::GetInstance());
    }
}

} // namespace Soundscape
} // namespace R1
