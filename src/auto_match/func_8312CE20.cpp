#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B764;
extern const hkClass lbl_8323C434;
extern const hkClassMember lbl_82134E58[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312CE20()
{
    fn_82CEB3D8(&lbl_8323B764, "hkpCollisionFilterList", &lbl_8323C434, 0x3C,
        0, 0, 0, 0, lbl_82134E58, 1, 0, 0, 0, 0);
}
