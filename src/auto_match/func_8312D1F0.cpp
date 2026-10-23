#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B8A4;
extern const hkClass lbl_8323C494;
extern const hkClassMember lbl_821355C0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312D1F0()
{
    fn_82CEB3D8(&lbl_8323B8A4, "hkpConvexListShape", &lbl_8323C494, 0x50,
        0, 1, 0, 0, lbl_821355C0, 5, 0, 0, 0, 0);
}
