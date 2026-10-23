#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323BFB4;
extern const hkClass lbl_8323AB38;
extern const hkClassMember lbl_82136E58[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312E718()
{
    fn_82CEB3D8(&lbl_8323BFB4, "hkpStorageExtendedMeshShapeMeshSubpartStorage", &lbl_8323AB38, 0x68,
        0, 0, 0, 0, lbl_82136E58, 8, 0, 0, 0, 3);
}
