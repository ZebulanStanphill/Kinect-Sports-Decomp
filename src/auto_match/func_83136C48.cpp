#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323F53C;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_8214867C[];
extern const hkClassMember lbl_83186648[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83136C48()
{
    fn_82CEB3D8(&lbl_8323F53C, "hkxLight", &lbl_8323AB38, 0x40,
        0, 0, lbl_8214867C, 1, lbl_83186648, 5, 0, 0, 0, 1);
}
