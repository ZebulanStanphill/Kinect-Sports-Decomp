#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323F5DC;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_82148A78[];
extern const hkClassMember lbl_83186760[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83136E60()
{
    fn_82CEB3D8(&lbl_8323F5DC, "hkxMaterialEffect", &lbl_8323AB38, 0x1C,
        0, 0, lbl_82148A78, 1, lbl_83186760, 3, 0, 0, 0, 1);
}
