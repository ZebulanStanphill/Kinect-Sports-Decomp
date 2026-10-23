#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B974;
extern const hkClass lbl_8323AB38;
extern const hkClassMember lbl_82135960[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312D450()
{
    fn_82CEB3D8(&lbl_8323B974, "hkpConvexVerticesConnectivity", &lbl_8323AB38, 0x20,
        0, 0, 0, 0, lbl_82135960, 2, 0, 0, 0, 0);
}
