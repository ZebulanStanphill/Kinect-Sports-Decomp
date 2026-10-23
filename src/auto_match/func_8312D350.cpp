#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B914;
extern const hkClass lbl_8323C4C4;
extern const hkClassMember lbl_821357E8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312D350()
{
    fn_82CEB3D8(&lbl_8323B914, "hkpConvexTransformShape", &lbl_8323C4C4, 0x60,
        0, 0, 0, 0, lbl_821357E8, 1, 0, 0, 0, 0);
}
