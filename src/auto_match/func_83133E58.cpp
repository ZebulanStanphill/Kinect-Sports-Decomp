#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323E49C[];
extern char lbl_8323C434[];
extern char lbl_821432A0[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83133E58()
{
    fn_82CEB3D8(lbl_8323E49C, "hkpConstrainedSystemFilter", lbl_8323C434, 0x38, 0, 1, 0, 0, lbl_821432A0, 1, 0, 0, 0, 0);
}
