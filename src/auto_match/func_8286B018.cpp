#include "R1/Soundscape/BankEntryState.h"

extern "C" {
void fn_82230110(void *string, const char *text);
int atexit(void (*function)(void));
void fn_83140198(void);
extern unsigned int lbl_83211880;
extern char lbl_83211864[];
}

namespace R1 {
namespace Soundscape {

// A function-local static std::string, constructed on first use with the
// compiler's guard bit and destroyed at exit by fn_83140198.
const std::string &BankEntry_UNLOAD_FAILED_c::vf0C()
{
    if ((lbl_83211880 & 1) == 0) {
        lbl_83211880 = lbl_83211880 | 1;
        fn_82230110(lbl_83211864, "UNLOAD_FAILED");
        atexit(fn_83140198);
    }
    return reinterpret_cast<const std::string &>(lbl_83211864);
}

} // namespace Soundscape
} // namespace R1
