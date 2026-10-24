#include "havok/hkBase.h"
extern "C" {
extern char lbl_82140A48[];
extern char lbl_8323AB38[];
extern char lbl_8323E080[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

extern "C" void fn_831334C8()
{
    fn_82CEB3D8(lbl_8323E080, "hkpConstraintData", lbl_8323AB38, 12, 0, 0, lbl_82140A48, 1, (lbl_82140A48 + 20), 1, 0, 0, 0, 0);
}
