#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C2E4;
extern const hkClass lbl_8323C2B4;
extern const hkClassMember lbl_82137974[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312F0B8()
{
    fn_82CEB3D8(&lbl_8323C2E4, "hkpLinkedCollidable", &lbl_8323C2B4, 0x5C,
        0, 0, 0, 0, lbl_82137974, 1, 0, 0, 0, 0);
}
