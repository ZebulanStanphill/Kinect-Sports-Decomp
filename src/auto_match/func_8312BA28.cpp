#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323AE98;
extern const hkClassMember lbl_8213089C[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312BA28()
{
    fn_82CEB3D8(&lbl_8323AE98, "hkClassEnumItem", 0, 8,
        0, 0, 0, 0, lbl_8213089C, 2, 0, 0, 0, 0);
}
