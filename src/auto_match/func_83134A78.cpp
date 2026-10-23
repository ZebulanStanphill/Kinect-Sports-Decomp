#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323E88C;
extern const hkClass lbl_8323E1D0;
extern const hkClassMember lbl_82144540[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83134A78()
{
    fn_82CEB3D8(&lbl_8323E88C, "hkpReorientAction", &lbl_8323E1D0, 0x50,
        0, 0, 0, 0, lbl_82144540, 0x4, 0, 0, 0, 0);
}
