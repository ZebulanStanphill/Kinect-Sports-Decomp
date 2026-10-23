#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323ADA8;
extern const hkClassEnum lbl_8213059C[];
extern const hkClassMember lbl_8317EC58[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312B7D0()
{
    fn_82CEB3D8(&lbl_8323ADA8, "hkArrayTypeAttribute", 0, 1,
        0, 0, lbl_8213059C, 1, lbl_8317EC58, 1, 0, 0, 0, 0);
}
