#include "havok/hkBase.h"
extern "C" {
extern char lbl_8213C0A0[];
extern char lbl_8323D340[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

extern "C" void fn_83131140()
{
    fn_82CEB3D8(lbl_8323D340, "hkpPrismaticConstraintDataAtoms", 0, 192, 0, 0, lbl_8213C0A0, 1, (lbl_8213C0A0 + 24), 7, 0, 0, 0, 0);
}
