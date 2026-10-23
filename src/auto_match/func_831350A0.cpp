#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EA8C;
extern const hkClassMember lbl_82145160[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831350A0()
{
    fn_82CEB3D8(&lbl_8323EA8C, "hkpMassProperties", 0, 0x50,
        0, 0, 0, 0, lbl_82145160, 4, 0, 0, 0, 0);
}
