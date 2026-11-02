#include "R1/Soundscape/BankEntryState.h"

extern "C" {
void fn_82230110(void *string, const char *text);
int atexit(void (*function)(void));
void fn_83140138(void);
extern unsigned int lbl_83211800;
extern char lbl_832117E4[];
}

namespace R1 {
namespace Soundscape {

// A function-local static std::string, constructed on first use with the
// compiler's guard bit and destroyed at exit by fn_83140138.
const std::string &BankEntry_LOAD_FAILED_c::vf0C()
{
    if ((lbl_83211800 & 1) == 0) {
        lbl_83211800 = lbl_83211800 | 1;
        fn_82230110(lbl_832117E4, "LOAD_FAILED");
        atexit(fn_83140138);
    }
    return reinterpret_cast<const std::string &>(lbl_832117E4);
}

} // namespace Soundscape
} // namespace R1
