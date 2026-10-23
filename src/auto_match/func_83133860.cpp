#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323E1D0[];
extern char lbl_8323DF90[];
extern char lbl_82140E2C[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83133860()
{
    fn_82CEB3D8(lbl_8323E1D0, "hkpUnaryAction", lbl_8323DF90, 0x1c, 0, 0, 0, 0, lbl_82140E2C, 1, 0, 0, 0, 0);
}
