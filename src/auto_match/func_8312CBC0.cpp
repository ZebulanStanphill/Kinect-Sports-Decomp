#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B640;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_82134324[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312CBC0()
{
    fn_82CEB3D8(&lbl_8323B640, "hkMeshShape", &lbl_8323AB38, 8,
        0, 0, lbl_82134324, 1, 0, 0, 0, 0, 0, 0);
}
