// R1::Soundscape::BankEntryContext_c constructor: copies the AudioVariant_c,
// clears the flags, then starts in BankEntry_TRIGGER_LOAD_c.
#include "R1/Soundscape/BankEntryState.h"

namespace R1 {
namespace Soundscape {

BankEntryContext_c::BankEntryContext_c(const AudioVariant_c &variant)
    : unk04(variant)
{
    unk28 = 0;
    unk29 = 0;
    unk2A = 0;
    unk2B = 0;
    unk2C = 0;
    state = 0;
    SetState(Singleton_c<BankEntry_TRIGGER_LOAD_c>::GetInstance());
}

} // namespace Soundscape
} // namespace R1
