#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323E68C[];
extern char lbl_8323E1D0[];
extern char lbl_82143E30[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83134418()
{
    fn_82CEB3D8(lbl_8323E68C, "hkpMotorAction", lbl_8323E1D0, 0x40, 0, 0, 0, 0, lbl_82143E30, 4, 0, 0, 0, 0);
}
