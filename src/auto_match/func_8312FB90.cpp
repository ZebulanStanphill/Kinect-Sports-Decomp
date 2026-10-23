#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323CBD0;
extern const hkClass lbl_8323E080;
extern const hkClassMember lbl_82139F7C[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312FB90()
{
    fn_82CEB3D8(&lbl_8323CBD0, "hkpBallAndSocketConstraintData", &lbl_8323E080, 0x50,
        0, 0, 0, 0, lbl_82139F7C, 1, 0, 0, 0, 0);
}
