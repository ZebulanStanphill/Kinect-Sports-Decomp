#include "havok/hkBase.h"
extern "C" {
extern char lbl_8213B408[];
extern char lbl_8323CFE0[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

extern "C" void fn_83130808()
{
    fn_82CEB3D8(lbl_8323CFE0, "hkpHingeConstraintDataAtoms", 0, 160, 0, 0, lbl_8213B408, 1, (lbl_8213B408 + 24), 3, 0, 0, 0, 0);
}
