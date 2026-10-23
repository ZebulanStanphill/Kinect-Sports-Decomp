#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C0B4;
extern const hkClass lbl_8323BC74;
extern const hkClassMember lbl_821370C0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312EA98()
{
    fn_82CEB3D8(&lbl_8323C0B4, "hkpStorageMeshShape", &lbl_8323BC74, 0x70,
        0, 0, 0, 0, lbl_821370C0, 1, 0, 0, 0, 0);
}
