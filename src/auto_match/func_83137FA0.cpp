#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323FB3C;
extern const hkClassMember lbl_83186BE0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83137FA0()
{
    fn_82CEB3D8(&lbl_8323FB3C, "hkxVertexDescriptionElementDecl", 0, 0xC,
        0, 0, 0, 0, lbl_83186BE0, 4, 0, 0, 0, 1);
}
