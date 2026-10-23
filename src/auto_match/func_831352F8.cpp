#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EB7C;
extern const hkClassMember lbl_82145FE0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831352F8()
{
    fn_82CEB3D8(&lbl_8323EB7C, "hkpVehicleDataWheelComponentParams", 0, 0x28,
        0, 0, 0, 0, lbl_82145FE0, 0xA, 0, 0, 0, 0);
}
