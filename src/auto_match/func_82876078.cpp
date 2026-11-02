#include "R1/Soundscape/BankEntryState.h"

extern "C" {
int fn_82875D70(R1::Soundscape::BankEntryContext_c *context);
}

namespace R1 {
namespace Soundscape {

void BankEntry_TRIGGER_LOAD_c::vf08(BankEntryContext_c *context)
{
    context->unk28 = 0;
    context->unk29 = 0;
    context->unk2A = 0;
    context->unk2B = 0;
    context->unk2C = 0;
    BankEntryState_i *next;
    if (fn_82875D70(context) < 0) {
        next = Singleton_c<BankEntry_LOAD_FAILED_c>::GetInstance();
    } else {
        next = Singleton_c<BankEntry_WAITING_FOR_LOAD_TO_COMPLETE_c>::GetInstance();
    }
    context->SetState(next);
}

} // namespace Soundscape
} // namespace R1
