#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EFDC;
extern const hkClassMember lbl_82147AA0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83135E48()
{
    fn_82CEB3D8(&lbl_8323EFDC, "hkpVehicleFrictionStatusAxisStatus", 0, 0x24,
        0, 0, 0, 0, lbl_82147AA0, 9, 0, 0, 0, 0);
}
