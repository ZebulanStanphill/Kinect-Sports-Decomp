#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323DE10[];
extern char lbl_8323DDE0[];
extern char lbl_82140060[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83132EC8()
{
    fn_82CEB3D8(lbl_8323DE10, "hkpSoftContactModifierConstraintAtom", lbl_8323DDE0, 0x30, 0, 0, 0, 0, lbl_82140060, 2, 0, 0, 0, 0);
}
