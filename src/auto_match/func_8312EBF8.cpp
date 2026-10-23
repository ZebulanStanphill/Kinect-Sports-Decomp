#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C124;
extern const hkClass lbl_8323C5E4;
extern const hkClassMember lbl_821371B8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312EBF8()
{
    fn_82CEB3D8(&lbl_8323C124, "hkpTransformShape", &lbl_8323C5E4, 0x70,
        0, 0, 0, 0, lbl_821371B8, 4, 0, 0, 0, 0);
}
