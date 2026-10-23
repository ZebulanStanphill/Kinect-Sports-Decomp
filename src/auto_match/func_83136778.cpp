#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323F37C;
extern const hkClass lbl_8323AB38;
extern const hkClassMember lbl_821482A0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83136778()
{
    fn_82CEB3D8(&lbl_8323F37C, "hkxAttributeHolder", &lbl_8323AB38, 0x14,
        0, 0, 0, 0, lbl_821482A0, 1, 0, 0, 0, 1);
}
