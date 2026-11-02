#include "R1/Soundscape/BankEntryState.h"

extern "C" {
void fn_82230110(void *string, const char *text);
int atexit(void (*function)(void));
void fn_831400F0(void);
extern unsigned int lbl_832117A0;
extern char lbl_83211784[];
}

namespace R1 {
namespace Soundscape {

// A function-local static std::string, constructed on first use with the
// compiler's guard bit and destroyed at exit by fn_831400F0.
const std::string &BankEntry_TRIGGER_LOAD_c::vf0C()
{
    if ((lbl_832117A0 & 1) == 0) {
        lbl_832117A0 = lbl_832117A0 | 1;
        fn_82230110(lbl_83211784, "TRIGGER_LOAD");
        atexit(fn_831400F0);
    }
    return reinterpret_cast<const std::string &>(lbl_83211784);
}

} // namespace Soundscape
} // namespace R1
