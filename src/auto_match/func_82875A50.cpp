#include "R1/Soundscape/BankEntryState.h"

extern "C" {
void fn_82FE79D0(R1::Soundscape::BankEntryState_i *state);
}

namespace R1 {
namespace Soundscape {

void BankEntry_WAITING_FOR_LOAD_TO_COMPLETE_c::vf08(BankEntryContext_c *context)
{
    BankEntryState_i *next;
    if (context->unk28 != 0) {
        fn_82FE79D0(this);
        next = Singleton_c<BankEntry_LOADED_c>::GetInstance();
    } else if (context->unk29 != 0) {
        fn_82FE79D0(this);
        next = Singleton_c<BankEntry_LOAD_FAILED_c>::GetInstance();
    } else {
        return;
    }
    context->SetState(next);
}

} // namespace Soundscape
} // namespace R1
