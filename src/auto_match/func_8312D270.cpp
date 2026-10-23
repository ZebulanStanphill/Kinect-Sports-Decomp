#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B8D4;
extern const hkClass lbl_8323C614;
extern const hkClassMember lbl_821356D8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312D270()
{
    fn_82CEB3D8(&lbl_8323B8D4, "hkpConvexPieceMeshShape", &lbl_8323C614, 0x24,
        0, 0, 0, 0, lbl_821356D8, 3, 0, 0, 0, 0);
}
