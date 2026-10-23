#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323F56C;
extern const hkClassMember lbl_831866F0[];
extern const char lbl_8214886C[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83136CE0()
{
    fn_82CEB3D8(&lbl_8323F56C, "hkxMaterialTextureStage", 0, 0xC,
        0, 0, 0, 0, lbl_831866F0, 3, lbl_8214886C, 0, 0, 0);
}
