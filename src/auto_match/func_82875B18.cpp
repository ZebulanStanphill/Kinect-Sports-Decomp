#include "R1/Soundscape/BankEntryState.h"

namespace R1 {
namespace Soundscape {

void BankEntry_LOAD_FAILED_c::vf00(BankEntryContext_c *context)
{
    context->SetState(Singleton_c<BankEntry_TRIGGER_LOAD_c>::GetInstance());
}

} // namespace Soundscape
} // namespace R1
