#include "havok/hkBase.h"
extern "C" {
extern char lbl_8213C3AC[];
extern char lbl_8323D400[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

extern "C" void fn_83131320()
{
    fn_82CEB3D8(lbl_8323D400, "hkpRagdollConstraintDataAtoms", 0, 304, 0, 0, lbl_8213C3AC, 1, (lbl_8213C3AC + 20), 7, 0, 0, 0, 0);
}
