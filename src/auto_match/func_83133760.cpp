#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323E170[];
extern char lbl_8323E200[];
extern char lbl_82140DB4[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83133760()
{
    fn_82CEB3D8(lbl_8323E170, "hkpPhantom", lbl_8323E200, 0xa4, 0, 0, 0, 0, lbl_82140DB4, 2, 0, 0, 0, 0);
}
