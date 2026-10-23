#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323CD50;
extern const hkClass lbl_8323E110;
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83130020()
{
    fn_82CEB3D8(&lbl_8323CD50, "hkpCharacterMotion", &lbl_8323E110, 0x120,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
