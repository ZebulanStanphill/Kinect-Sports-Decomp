#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C314;
extern const hkClassMember lbl_821379AC[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312F138()
{
    fn_82CEB3D8(&lbl_8323C314, "hkpMeshMaterial", 0, 4,
        0, 0, 0, 0, lbl_821379AC, 1, 0, 0, 0, 0);
}
