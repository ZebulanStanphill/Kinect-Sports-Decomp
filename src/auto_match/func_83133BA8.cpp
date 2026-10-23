#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323E3B4;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_82142A08[];
extern const hkClassMember lbl_83184DE0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83133BA8()
{
    fn_82CEB3D8(&lbl_8323E3B4, "hkpMoppCode", &lbl_8323AB38, 0x30,
        0, 0, lbl_82142A08, 1, lbl_83184DE0, 3, 0, 0, 0, 0);
}
