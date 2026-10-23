#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B0A8;
extern const hkClassEnum lbl_82131D98[];
extern const hkClassMember lbl_82131DC0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312BF48()
{
    fn_82CEB3D8(&lbl_8323B0A8, "hkMultiThreadCheck", 0, 8,
        0, 0, lbl_82131D98, 2, lbl_82131DC0, 3, 0, 0, 0, 0);
}
