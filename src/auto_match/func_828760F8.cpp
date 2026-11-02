#include "R1/Soundscape/BankEntryState.h"

extern "C" {
int fn_82875EF8(R1::Soundscape::BankEntryContext_c *context);
}

namespace R1 {
namespace Soundscape {

void BankEntry_TRIGGER_UNLOAD_c::vf08(BankEntryContext_c *context)
{
    BankEntryState_i *next;
    if (fn_82875EF8(context) < 0) {
        next = Singleton_c<BankEntry_UNLOAD_FAILED_c>::GetInstance();
    } else {
        next = Singleton_c<BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c>::GetInstance();
    }
    context->SetState(next);
}

} // namespace Soundscape
} // namespace R1
