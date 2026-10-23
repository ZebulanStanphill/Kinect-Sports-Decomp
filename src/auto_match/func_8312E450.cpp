#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323BEB4;
extern const hkClass lbl_8323C614;
extern const hkClassMember lbl_831813E0[];
extern const char lbl_82136C70[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312E450()
{
    fn_82CEB3D8(&lbl_8323BEB4, "hkpSimpleMeshShape", &lbl_8323C614, 0x44,
        0, 0, 0, 0, lbl_831813E0, 5, lbl_82136C70, 0, 0, 0);
}
