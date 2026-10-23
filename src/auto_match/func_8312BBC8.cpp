#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323AF28;
extern const hkClassEnum lbl_82131858[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312BBC8()
{
    fn_82CEB3D8(&lbl_8323AF28, "hkColor", 0, 1,
        0, 0, lbl_82131858, 1, 0, 0, 0, 0, 0, 0);
}
