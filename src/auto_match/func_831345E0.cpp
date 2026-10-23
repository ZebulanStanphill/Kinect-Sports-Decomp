#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323E6FC;
extern const hkClass lbl_8323E1D0;
extern const hkClassMember lbl_82144000[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831345E0()
{
    fn_82CEB3D8(&lbl_8323E6FC, "hkpMouseSpringAction", &lbl_8323E1D0, 0x60,
        0, 0, 0, 0, lbl_82144000, 0x8, 0, 0, 0, 0);
}
