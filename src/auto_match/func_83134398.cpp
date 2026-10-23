#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323E64C[];
extern char lbl_8323C434[];
extern char lbl_82143D60[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83134398()
{
    fn_82CEB3D8(lbl_8323E64C, "hkpGroupCollisionFilter", lbl_8323C434, 0xb4, 0, 0, 0, 0, lbl_82143D60, 2, 0, 0, 0, 0);
}
