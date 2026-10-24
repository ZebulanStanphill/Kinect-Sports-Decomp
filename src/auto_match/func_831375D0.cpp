#include "havok/hkBase.h"
extern "C" {
extern char lbl_82148F80[];
extern char lbl_8323AB38[];
extern char lbl_8323F7FC[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}
extern "C" void fn_831375D0()
{
    fn_82CEB3D8(lbl_8323F7FC, "hkxScene", lbl_8323AB38, 0xb0, 0x0, 0x0, 0x0, 0x0, lbl_82148F80, 0xd, (lbl_82148F80 + 0x138), 0x0, 0x0, 0x1);
}
