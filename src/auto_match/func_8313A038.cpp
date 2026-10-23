#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_832656A0;
extern const hkClassMember lbl_82187750[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8313A038()
{
    fn_82CEB3D8(&lbl_832656A0, "hkClassEnum", 0, 0x14,
        0, 0, 0, 0, lbl_82187750, 4, 0, 0, 0, 0);
}
