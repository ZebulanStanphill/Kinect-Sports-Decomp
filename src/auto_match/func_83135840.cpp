#include "havok/hkBase.h"
extern "C" {
extern char lbl_82146B58[], lbl_8323F1EC[], lbl_8323ED8C[];
void fn_82CEB3D8(void*, const char*, const void*, int, const void*, int, const void*, int, const void*, int, const void*, const void*, unsigned, int);
void fn_83135840() {
    fn_82CEB3D8(lbl_8323ED8C, "hkpVehicleDefaultTransmission", lbl_8323F1EC, 0x34, 0, 0, 0, 0, lbl_82146B58, 0x7, 0, 0, 0, 0);
}
}
