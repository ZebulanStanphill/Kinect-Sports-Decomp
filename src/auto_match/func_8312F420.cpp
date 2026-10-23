#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C434;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_82137D8C[];
extern const hkClassMember lbl_83181788[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312F420()
{
    fn_82CEB3D8(&lbl_8323C434, "hkpCollisionFilter", &lbl_8323AB38, 0x30,
        0, 4, lbl_82137D8C, 1, lbl_83181788, 3, 0, 0, 0, 0);
}
