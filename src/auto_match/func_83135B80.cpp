#include "havok/hkBase.h"
extern "C" {
extern char lbl_82147530[], lbl_8323F24C[], lbl_8323EEBC[];
void fn_82CEB3D8(void*, const char*, const void*, int, const void*, int, const void*, int, const void*, int, const void*, const void*, unsigned, int);
void fn_83135B80() {
    fn_82CEB3D8(lbl_8323EEBC, "hkpVehicleLinearCastWheelCollide", lbl_8323F24C, 0x34, 0, 0, 0, 0, lbl_82147530, 0x5, 0, 0, 0, 0);
}
}
