#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D1D0;
extern const hkClass lbl_8323AB38;
extern const hkClassMember lbl_8213BA00[];
extern const char lbl_8213BAA8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83130D08()
{
    fn_82CEB3D8(&lbl_8323D1D0, "hkpPhysicsSystem", &lbl_8323AB38, 0x44,
        0, 0, 0, 0, lbl_8213BA00, 7, lbl_8213BAA8, 0, 0, 0);
}
