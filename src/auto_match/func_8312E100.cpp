#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323BD84;
extern const hkClass lbl_8323C674;
extern const hkClassMember lbl_821368E8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312E100()
{
    fn_82CEB3D8(&lbl_8323BD84, "hkpMultiSphereShape", &lbl_8323C674, 0xA0,
        0, 0, 0, 0, lbl_821368E8, 2, 0, 0, 0, 0);
}
