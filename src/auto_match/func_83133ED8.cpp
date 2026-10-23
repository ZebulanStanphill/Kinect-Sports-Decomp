#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323E4DC[];
extern char lbl_8323DFF0[];
extern char lbl_82143360[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83133ED8()
{
    fn_82CEB3D8(lbl_8323E4DC, "hkpDashpotAction", lbl_8323DFF0, 0x60, 0, 0, 0, 0, lbl_82143360, 4, 0, 0, 0, 0);
}
