#include "havok/hkBase.h"
extern "C" {
extern char lbl_821363C0[];
extern char lbl_8323BC04[];
extern char lbl_8323C614[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}
extern "C" void fn_8312DC30()
{
    fn_82CEB3D8(lbl_8323BC04, "hkpListShape", lbl_8323C614, 0x70, 0x0, 0x0, lbl_821363C0, 0x1, (lbl_821363C0 + 0x78), 0x6, 0x0, 0x0, 0x0, 0x0);
}
