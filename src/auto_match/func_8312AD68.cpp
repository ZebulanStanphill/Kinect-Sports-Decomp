#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323A9D8;
extern const hkClass lbl_8323A968;
extern const hkClassMember lbl_8212FCE8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312AD68()
{
    fn_82CEB3D8(&lbl_8323A9D8, "hkSimpleLocalFrame", &lbl_8323A968, 0x70,
        0, 0, 0, 0, lbl_8212FCE8, 5, 0, 0, 0, 1);
}
