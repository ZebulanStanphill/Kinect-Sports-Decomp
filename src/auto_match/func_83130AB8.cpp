#include "havok/hkBase.h"
extern "C" {
extern char lbl_8213B708[];
extern char lbl_8323D100[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

extern "C" void fn_83130AB8()
{
    fn_82CEB3D8(lbl_8323D100, "hkpLimitedHingeConstraintDataAtoms", 0, 208, 0, 0, lbl_8213B708, 1, (lbl_8213B708 + 24), 6, 0, 0, 0, 0);
}
