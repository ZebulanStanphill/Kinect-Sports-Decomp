#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B570;
extern const hkClass lbl_8323B640;
extern const hkClassMember lbl_821340D0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312C928()
{
    fn_82CEB3D8(&lbl_8323B570, "hkMemoryMeshShape", &lbl_8323B640, 0x30,
        0, 0, 0, 0, lbl_821340D0, 4, 0, 0, 0, 0);
}
