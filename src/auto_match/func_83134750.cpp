#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323E77C;
extern const hkClass lbl_8323D1D0;
extern const hkClassMember lbl_821441A0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83134750()
{
    fn_82CEB3D8(&lbl_8323E77C, "hkpPhysicsSystemWithContacts", &lbl_8323D1D0, 0x50,
        0, 0, 0, 0, lbl_821441A0, 0x1, 0, 0, 0, 0);
}
