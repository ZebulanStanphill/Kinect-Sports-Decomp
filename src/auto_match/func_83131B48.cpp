#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D700;
extern const hkClass lbl_8323E080;
extern const hkClassMember lbl_8213CC70[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83131B48()
{
    fn_82CEB3D8(&lbl_8323D700, "hkpStiffSpringConstraintData", &lbl_8323E080, 0x50,
        0, 0, 0, 0, lbl_8213CC70, 1, 0, 0, 0, 0);
}
