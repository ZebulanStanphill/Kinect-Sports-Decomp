#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323DFF0[];
extern char lbl_8323DF90[];
extern char lbl_8214068C[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83133378()
{
    fn_82CEB3D8(lbl_8323DFF0, "hkpBinaryAction", lbl_8323DF90, 0x20, 0, 0, 0, 0, lbl_8214068C, 2, 0, 0, 0, 0);
}
