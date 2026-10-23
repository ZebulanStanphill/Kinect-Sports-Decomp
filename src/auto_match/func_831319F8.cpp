#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D690;
extern const hkClass lbl_8323E050;
extern const hkClassMember lbl_8213CB80[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831319F8()
{
    fn_82CEB3D8(&lbl_8323D690, "hkpStiffSpringChainData", &lbl_8323E050, 0x30,
        0, 0, 0, 0, lbl_8213CB80, 5, 0, 0, 0, 0);
}
