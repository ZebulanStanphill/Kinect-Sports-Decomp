#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EB1C;
extern const hkClass lbl_8323AB38;
extern const hkClassMember lbl_82145CF8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831351F8()
{
    fn_82CEB3D8(&lbl_8323EB1C, "hkpTyremarksWheel", &lbl_8323AB38, 0x1c,
        0, 0, 0, 0, lbl_82145CF8, 0x3, 0, 0, 0, 0);
}
