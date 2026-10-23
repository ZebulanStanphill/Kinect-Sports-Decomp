#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323F2BC;
extern const hkClass lbl_8323AB38;
extern const hkClassMember lbl_83186320[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83136550()
{
    fn_82CEB3D8(&lbl_8323F2BC, "hkxAnimatedFloat", &lbl_8323AB38, 0x18,
        0, 0, 0, 0, lbl_83186320, 2, 0, 0, 0, 1);
}
