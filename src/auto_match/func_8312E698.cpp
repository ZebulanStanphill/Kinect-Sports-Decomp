#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323BF84;
extern const hkClass lbl_8323C314;
extern const hkClassMember lbl_82136E10[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312E698()
{
    fn_82CEB3D8(&lbl_8323BF84, "hkpStorageExtendedMeshShapeMaterial", &lbl_8323C314, 0xC,
        0, 0, 0, 0, lbl_82136E10, 3, 0, 0, 0, 1);
}
