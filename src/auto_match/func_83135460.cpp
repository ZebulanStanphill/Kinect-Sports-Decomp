#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EC0C;
extern const hkClass lbl_8323F12C;
extern const hkClassMember lbl_821464B0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83135460()
{
    fn_82CEB3D8(&lbl_8323EC0C, "hkpVehicleDriverInputAnalogStatus", &lbl_8323F12C, 0x14,
        0, 0, 0, 0, lbl_821464B0, 0x4, 0, 0, 0, 0);
}
