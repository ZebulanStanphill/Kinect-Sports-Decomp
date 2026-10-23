#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323AFB8;
extern const hkClassMember lbl_82131A28[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312BD18()
{
    fn_82CEB3D8(&lbl_8323AFB8, "hkCustomAttributesAttribute", 0, 0xC,
        0, 0, 0, 0, lbl_82131A28, 2, 0, 0, 0, 0);
}
