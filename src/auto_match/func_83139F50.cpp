#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_83265640;
extern const hkClassEnum lbl_821876E0[];
extern const hkClassMember lbl_831BCDE0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83139F50()
{
    fn_82CEB3D8(&lbl_83265640, "hkClassMember", 0, 0x18,
        0, 0, lbl_821876E0, 3, lbl_831BCDE0, 9, 0, 0, 0, 0);
}
