#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323BD54;
extern const hkClass lbl_8323C5E4;
extern const hkClassMember lbl_8213684C[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312E080()
{
    fn_82CEB3D8(&lbl_8323BD54, "hkpMultiRayShape", &lbl_8323C5E4, 0x20,
        0, 0, 0, 0, lbl_8213684C, 2, 0, 0, 0, 0);
}
