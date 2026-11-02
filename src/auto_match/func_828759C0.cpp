#include "R1/Soundscape/BankEntryState.h"

namespace R1 {
namespace Soundscape {

bool BankEntryContext_c::fn_828759C0()
{
    return state == Singleton_c<BankEntry_UNLOADED_c>::GetInstance();
}

} // namespace Soundscape
} // namespace R1
