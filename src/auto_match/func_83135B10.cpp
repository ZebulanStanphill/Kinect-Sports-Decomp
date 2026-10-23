#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EE8C;
extern const hkClassMember lbl_821474D0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83135B10()
{
    fn_82CEB3D8(&lbl_8323EE8C, "hkpVehicleLinearCastWheelCollideWheelState", 0, 0x60,
        0, 0, 0, 0, lbl_821474D0, 4, 0, 0, 0, 0);
}
