#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EF7C;
extern const hkClassMember lbl_82147968[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83135D68()
{
    fn_82CEB3D8(&lbl_8323EF7C, "hkpVehicleFrictionDescriptionAxisDescription", 0, 0x64,
        0, 0, 0, 0, lbl_82147968, 0xA, 0, 0, 0, 0);
}
