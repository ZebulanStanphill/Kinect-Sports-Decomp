#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323AEF8;
extern const hkClassEnum lbl_82130D20[];
extern const hkClassMember lbl_8317EE30[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312BB50()
{
    fn_82CEB3D8(&lbl_8323AEF8, "hkClassMember", 0, 0x18,
        0, 0, lbl_82130D20, 3, lbl_8317EE30, 9, 0, 0, 0, 0);
}
