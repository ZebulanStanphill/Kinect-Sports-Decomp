#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323AD48;
extern const hkClassEnum lbl_82130558[];
extern const hkClassMember lbl_8317EC40[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312B6D0()
{
    fn_82CEB3D8(&lbl_8323AD48, "hkSemanticsAttribute", 0, 1,
        0, 0, lbl_82130558, 1, lbl_8317EC40, 1, 0, 0, 0, 0);
}
