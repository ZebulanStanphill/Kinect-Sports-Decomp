#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323CC30;
extern const hkClass lbl_8323E050;
extern const hkClassMember lbl_8213A098[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312FC80()
{
    fn_82CEB3D8(&lbl_8323CC30, "hkpBallSocketChainData", &lbl_8323E050, 0x34,
        0, 0, 0, 0, lbl_8213A098, 6, 0, 0, 0, 0);
}
