#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323DDB0[];
extern char lbl_8323D960[];
extern char lbl_8213FFA0[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83132DC8()
{
    fn_82CEB3D8(lbl_8323DDB0, "hkpPulleyConstraintAtom", lbl_8323D960, 0x40, 0, 0, 0, 0, lbl_8213FFA0, 4, 0, 0, 0, 0);
}
