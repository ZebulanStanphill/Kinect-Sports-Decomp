#include "havok/hkBase.h"
extern "C" {
extern char lbl_821460D0[];
extern char lbl_8323AB38[];
extern char lbl_8323EBAC[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}
extern "C" void fn_83135368()
{
    fn_82CEB3D8(lbl_8323EBAC, "hkpVehicleData", lbl_8323AB38, 0x1a0, 0x0, 0x0, 0x0, 0x0, lbl_821460D0, 0x13, (lbl_821460D0 + 0x1c8), 0x0, 0x0, 0x1);
}
