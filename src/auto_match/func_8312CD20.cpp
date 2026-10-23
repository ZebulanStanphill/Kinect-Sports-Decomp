#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B704;
extern const hkClass lbl_8323C5E4;
extern const hkClassMember lbl_82134CA0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312CD20()
{
    fn_82CEB3D8(&lbl_8323B704, "hkpBvShape", &lbl_8323C5E4, 0x1C,
        0, 0, 0, 0, lbl_82134CA0, 2, 0, 0, 0, 0);
}
