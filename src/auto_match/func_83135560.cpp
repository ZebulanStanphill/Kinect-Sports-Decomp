#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EC6C;
extern const hkClassMember lbl_82146668[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83135560()
{
    fn_82CEB3D8(&lbl_8323EC6C, "hkpVehicleDefaultBrakeWheelBrakingProperties", 0, 0xC,
        0, 0, 0, 0, lbl_82146668, 3, 0, 0, 0, 0);
}
