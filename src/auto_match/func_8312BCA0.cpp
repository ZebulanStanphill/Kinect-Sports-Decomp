#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323AF88;
extern const hkClassEnum lbl_82131980[];
extern const hkClassMember lbl_82131998[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312BCA0()
{
    fn_82CEB3D8(&lbl_8323AF88, "hkContactPointMaterial", 0, 8,
        0, 0, lbl_82131980, 1, lbl_82131998, 5, 0, 0, 0, 0);
}
