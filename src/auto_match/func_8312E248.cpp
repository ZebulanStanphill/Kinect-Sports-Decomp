#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323BDF4;
extern const hkClass lbl_8323C4F4;
extern const hkClassMember lbl_821369D0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312E248()
{
    fn_82CEB3D8(&lbl_8323BDF4, "hkpPlaneShape", &lbl_8323C4F4, 0x40,
        0, 0, 0, 0, lbl_821369D0, 3, 0, 0, 0, 0);
}
