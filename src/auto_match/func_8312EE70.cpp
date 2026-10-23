#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C1F4;
extern const hkClassMember lbl_82137520[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312EE70()
{
    fn_82CEB3D8(&lbl_8323C1F4, "hkpAgent1nSector", 0, 0x200,
        0, 0, 0, 0, lbl_82137520, 5, 0, 0, 0, 0);
}
