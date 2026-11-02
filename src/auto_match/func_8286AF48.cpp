#include "R1/Soundscape/BankEntryState.h"

extern "C" {
void fn_82230110(void *string, const char *text);
int atexit(void (*function)(void));
void fn_83140168(void);
extern unsigned int lbl_83211840;
extern char lbl_83211824[];
}

namespace R1 {
namespace Soundscape {

// A function-local static std::string, constructed on first use with the
// compiler's guard bit and destroyed at exit by fn_83140168.
const std::string &BankEntry_WAITING_FOR_UNLOAD_TO_COMPLETE_c::vf0C()
{
    if ((lbl_83211840 & 1) == 0) {
        lbl_83211840 = lbl_83211840 | 1;
        fn_82230110(lbl_83211824, "WAITING_FOR_UNLOAD_TO_COMPLETE");
        atexit(fn_83140168);
    }
    return reinterpret_cast<const std::string &>(lbl_83211824);
}

} // namespace Soundscape
} // namespace R1
