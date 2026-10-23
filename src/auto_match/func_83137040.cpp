#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323F65C;
extern const hkClass lbl_8323AB38;
extern const hkClassMember lbl_82148BC0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83137040()
{
    fn_82CEB3D8(&lbl_8323F65C, "hkxMaterialShaderSet", &lbl_8323AB38, 0x14,
        0, 0, 0, 0, lbl_82148BC0, 1, 0, 0, 0, 1);
}
