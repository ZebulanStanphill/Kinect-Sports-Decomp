#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323BDB4;
extern const hkClass lbl_8323C434;
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312E180()
{
    fn_82CEB3D8(&lbl_8323BDB4, "hkpNullCollisionFilter", &lbl_8323C434, 0x30,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
