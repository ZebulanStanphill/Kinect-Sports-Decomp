#include "havok/hkBase.h"
extern "C" {
extern const char lbl_82143B58[];
extern const char lbl_8323E5CC[];
extern const char lbl_8323E60C[];
void fn_82CEB3D8(const void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned, int);
}
extern "C" void fn_831342C0()
{
    fn_82CEB3D8(lbl_8323E60C, "hkpGravityGun", lbl_8323E5CC, 0x60, 0x0, 0x0, 0x0, 0x0, lbl_82143B58, 0x8, (lbl_82143B58 + 192), 0x0, 0x0, 0x0);
}
