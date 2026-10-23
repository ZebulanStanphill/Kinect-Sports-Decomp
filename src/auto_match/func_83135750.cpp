#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323ED2C;
extern const hkClassMember lbl_82146A10[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83135750()
{
    fn_82CEB3D8(&lbl_8323ED2C, "hkpVehicleDefaultSuspensionWheelSpringSuspensionParameters", 0, 0xC,
        0, 0, 0, 0, lbl_82146A10, 3, 0, 0, 0, 0);
}
