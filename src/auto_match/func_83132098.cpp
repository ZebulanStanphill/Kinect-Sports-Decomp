#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D8D0;
extern const hkClassEnum lbl_8213EF78[];
extern const hkClassMember lbl_83183DB0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83132098()
{
    fn_82CEB3D8(&lbl_8323D8D0, "hkpMaterial", 0, 0xC,
        0, 0, lbl_8213EF78, 1, lbl_83183DB0, 3, 0, 0, 0, 0);
}
