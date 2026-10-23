#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B9A4;
extern const hkClassMember lbl_82135A10[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312D4D0()
{
    fn_82CEB3D8(&lbl_8323B9A4, "hkpConvexVerticesShapeFourVectors", 0, 0x30,
        0, 0, 0, 0, lbl_82135A10, 3, 0, 0, 0, 0);
}
