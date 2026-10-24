#include "havok/hkBase.h"
extern "C" {
extern char lbl_82148858[];
extern char lbl_8323F37C[];
extern char lbl_8323F59C[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

extern "C" void fn_83136D60()
{
    fn_82CEB3D8(lbl_8323F59C, "hkxMaterial", lbl_8323F37C, 128, 0, 0, lbl_82148858, 1, (lbl_82148858 + 40), 8, 0, 0, 0, 0);
}
