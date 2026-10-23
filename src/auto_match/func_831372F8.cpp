#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323F71C;
extern const hkClass lbl_8323AB38;
extern const hkClassMember lbl_82148CC0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831372F8()
{
    fn_82CEB3D8(&lbl_8323F71C, "hkxMeshSection", &lbl_8323AB38, 0x28,
        0, 0, 0, 0, lbl_82148CC0, 4, 0, 0, 0, 1);
}
