#include "R1/Soundscape/BankEntryState.h"

namespace R1 {
namespace Soundscape {

void BankEntry_LOADED_c::vf04(BankEntryContext_c *context)
{
    context->SetState(Singleton_c<BankEntry_TRIGGER_UNLOAD_c>::GetInstance());
}

} // namespace Soundscape
} // namespace R1
