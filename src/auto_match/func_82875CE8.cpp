// R1::Soundscape::BankEntryContext_c default constructor: vtable, embedded sub-object
// (fn_82292780), flag bytes cleared, then it starts in BankEntry_TRIGGER_LOAD_c.
#include "R1/Soundscape/BankEntryState.h"

extern "C" void *fn_82292780(void *self);

namespace R1 {
namespace Soundscape {

BankEntryContext_c::BankEntryContext_c()
{
    fn_82292780(unk04);
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
