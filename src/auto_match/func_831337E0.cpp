#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323E1A0[];
extern char lbl_8323E170[];
extern char lbl_82140DF0[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_831337E0()
{
    fn_82CEB3D8(lbl_8323E1A0, "hkpShapePhantom", lbl_8323E170, 0x160, 0, 0, 0, 0, lbl_82140DF0, 1, 0, 0, 0, 0);
}
