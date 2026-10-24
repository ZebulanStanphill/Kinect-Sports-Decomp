#include "havok/hkBase.h"
extern "C" {
extern char lbl_8213C380[];
extern char lbl_8323D430[];
extern char lbl_8323E080[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

extern "C" void fn_83131390()
{
    fn_82CEB3D8(lbl_8323D430, "hkpRagdollConstraintData", lbl_8323E080, 320, 0, 0, lbl_8213C380, 1, (lbl_8213C380 + 232), 1, 0, 0, 0, 0);
}
