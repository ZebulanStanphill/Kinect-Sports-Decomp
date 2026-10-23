#include "havok/hkBase.h"
extern "C" {
extern char lbl_82146C88[], lbl_8323F21C[], lbl_8323EDBC[];
void fn_82CEB3D8(void*, const char*, const void*, int, const void*, int, const void*, int, const void*, int, const void*, const void*, unsigned, int);
void fn_831358C0() {
    fn_82CEB3D8(lbl_8323EDBC, "hkpVehicleDefaultVelocityDamper", lbl_8323F21C, 0x14, 0, 0, 0, 0, lbl_82146C88, 0x3, 0, 0, 0, 0);
}
}
