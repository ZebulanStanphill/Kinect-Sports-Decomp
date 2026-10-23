#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323E92C;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_82144800[];
extern const hkClassMember lbl_83185558[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83134C70()
{
    fn_82CEB3D8(&lbl_8323E92C, "hkpSerializedAgentNnEntry", &lbl_8323AB38, 0x120,
        0, 0, lbl_82144800, 1, lbl_83185558, 0xE, 0, 0, 0, 0);
}
