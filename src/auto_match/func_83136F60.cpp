#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323F61C;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_82148B58[];
extern const hkClassMember lbl_831867D0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83136F60()
{
    fn_82CEB3D8(&lbl_8323F61C, "hkxMaterialShader", &lbl_8323AB38, 0x28,
        0, 0, lbl_82148B58, 1, lbl_831867D0, 6, 0, 0, 0, 1);
}
