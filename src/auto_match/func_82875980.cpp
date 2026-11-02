#include "R1/Soundscape/BankEntryState.h"

namespace R1 {
namespace Soundscape {

bool BankEntryContext_c::fn_82875980()
{
    return state == Singleton_c<BankEntry_LOADED_c>::GetInstance();
}

} // namespace Soundscape
} // namespace R1
