#include "havok/hkBase.h"
extern "C" {
extern char lbl_82147F08[];
extern char lbl_8323AB38[];
extern char lbl_8323F24C[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

extern "C" void fn_831363D8()
{
    fn_82CEB3D8(lbl_8323F24C, "hkpVehicleWheelCollide", lbl_8323AB38, 12, 0, 0, lbl_82147F08, 1, (lbl_82147F08 + 20), 2, 0, 0, 0, 0);
}
