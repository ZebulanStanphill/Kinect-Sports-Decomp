#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323DE70[];
extern char lbl_8323DDE0[];
extern char lbl_821400C0[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83132FC8()
{
    fn_82CEB3D8(lbl_8323DE70, "hkpCenterOfMassChangerModifierConstraintAtom", lbl_8323DDE0, 0x40, 0, 0, 0, 0, lbl_821400C0, 2, 0, 0, 0, 0);
}
