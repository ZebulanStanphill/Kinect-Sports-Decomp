#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323DDE0[];
extern char lbl_8323D960[];
extern char lbl_82140000[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83132E48()
{
    fn_82CEB3D8(lbl_8323DDE0, "hkpModifierConstraintAtom", lbl_8323D960, 0x20, 0, 0, 0, 0, lbl_82140000, 4, 0, 0, 0, 0);
}
