#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323E0E0[];
extern char lbl_8323E0B0[];
extern char lbl_82140B48[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_831335E0()
{
    fn_82CEB3D8(lbl_8323E0E0, "hkpLimitedForceConstraintMotor", lbl_8323E0B0, 0x14, 0, 0, 0, 0, lbl_82140B48, 2, 0, 0, 0, 0);
}
