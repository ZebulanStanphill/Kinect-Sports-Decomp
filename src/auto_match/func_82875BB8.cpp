#include "R1/Soundscape/BankEntryState.h"

extern "C" {
void fn_82FE79D0(R1::Soundscape::BankEntryState_i *state);
}

namespace R1 {
namespace Soundscape {

void BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c::vf08(BankEntryContext_c *context)
{
    BankEntryState_i *next;
    if (context->unk2A != 0) {
        fn_82FE79D0(this);
        next = Singleton_c<BankEntry_UNLOADED_c>::GetInstance();
    } else if (context->unk2B != 0) {
        fn_82FE79D0(this);
        next = Singleton_c<BankEntry_UNLOAD_FAILED_c>::GetInstance();
    } else {
        return;
    }
    context->SetState(next);
}

} // namespace Soundscape
} // namespace R1
