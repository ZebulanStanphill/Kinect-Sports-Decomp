#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B610;
extern const hkClassMember lbl_8317FB30[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312CB48()
{
    fn_82CEB3D8(&lbl_8323B610, "hkMeshSectionCinfo", 0, 0x20,
        0, 0, 0, 0, lbl_8317FB30, 8, 0, 0, 0, 1);
}
