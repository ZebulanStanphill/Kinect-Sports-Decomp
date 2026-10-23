#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323CE30;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_8213AA50[];
extern const hkClassMember lbl_83182ED0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83130318()
{
    fn_82CEB3D8(&lbl_8323CE30, "hkpConstraintInstance", &lbl_8323AB38, 0x38,
        0, 0, lbl_8213AA50, 5, lbl_83182ED0, 0xC, 0, 0, 0, 1);
}
