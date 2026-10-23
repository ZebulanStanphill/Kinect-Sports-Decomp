#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323DFC0[];
extern char lbl_8323DF90[];
extern char lbl_82140604[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_831332F8()
{
    fn_82CEB3D8(lbl_8323DFC0, "hkpArrayAction", lbl_8323DF90, 0x24, 0, 0, 0, 0, lbl_82140604, 1, 0, 0, 0, 0);
}
