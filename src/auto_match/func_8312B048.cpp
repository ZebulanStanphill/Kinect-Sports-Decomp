#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323AAD8;
extern const hkClass lbl_8323AB38;
extern const hkClassMember lbl_8212FF1C[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312B048()
{
    fn_82CEB3D8(&lbl_8323AAD8, "hkMonitorStreamColorTable", &lbl_8323AB38, 0x18,
        0, 0, 0, 0, lbl_8212FF1C, 2, 0, 0, 0, 0);
}
