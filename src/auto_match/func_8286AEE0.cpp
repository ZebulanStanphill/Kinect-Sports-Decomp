#include "R1/Soundscape/BankEntryState.h"

extern "C" {
void fn_82230110(void *string, const char *text);
int atexit(void (*function)(void));
void fn_83140150(void);
extern unsigned int lbl_83211820;
extern char lbl_83211804[];
}

namespace R1 {
namespace Soundscape {

// A function-local static std::string, constructed on first use with the
// compiler's guard bit and destroyed at exit by fn_83140150.
const std::string &BankEntry_TRIGGER_UNLOAD_c::vf0C()
{
    if ((lbl_83211820 & 1) == 0) {
        lbl_83211820 = lbl_83211820 | 1;
        fn_82230110(lbl_83211804, "TRIGGER_UNLOAD");
        atexit(fn_83140150);
    }
    return reinterpret_cast<const std::string &>(lbl_83211804);
}

} // namespace Soundscape
} // namespace R1
