#include "havok/hkBase.h"
extern "C" {
extern char lbl_8213B550[];
extern char lbl_8323D040[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

extern "C" void fn_831308F8()
{
    fn_82CEB3D8(lbl_8323D040, "hkpHingeLimitsDataAtoms", 0, 144, 0, 0, lbl_8213B550, 1, (lbl_8213B550 + 24), 3, 0, 0, 0, 0);
}
