#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EC9C;
extern const hkClass lbl_8323F0CC;
extern const hkClassMember lbl_821466B0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831355D0()
{
    fn_82CEB3D8(&lbl_8323EC9C, "hkpVehicleDefaultBrake", &lbl_8323F0CC, 0x18,
        0, 0, 0, 0, lbl_821466B0, 0x2, 0, 0, 0, 0);
}
