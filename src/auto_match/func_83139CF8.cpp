#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_83265550;
extern const hkClassEnum lbl_821872E0[];
extern const hkClassMember lbl_831BCD10[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83139CF8()
{
    fn_82CEB3D8(&lbl_83265550, "hkClassMember", 0, 0x14,
        0, 0, lbl_821872E0, 3, lbl_831BCD10, 8, 0, 0, 0, 0);
}
