#include "R1/Soundscape/BankEntryState.h"

extern "C" {
void fn_82230110(void *string, const char *text);
int atexit(void (*function)(void));
void fn_83140120(void);
extern unsigned int lbl_832117E0;
extern char lbl_832117C4[];
}

namespace R1 {
namespace Soundscape {

// A function-local static std::string, constructed on first use with the
// compiler's guard bit and destroyed at exit by fn_83140120.
const std::string &BankEntry_LOADED_c::vf0C()
{
    if ((lbl_832117E0 & 1) == 0) {
        lbl_832117E0 = lbl_832117E0 | 1;
        fn_82230110(lbl_832117C4, "LOADED");
        atexit(fn_83140120);
    }
    return reinterpret_cast<const std::string &>(lbl_832117C4);
}

} // namespace Soundscape
} // namespace R1
