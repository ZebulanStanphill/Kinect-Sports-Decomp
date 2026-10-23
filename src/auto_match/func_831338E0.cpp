#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323E200;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_82140FAC[];
extern const hkClassMember lbl_82140FD8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831338E0()
{
    fn_82CEB3D8(&lbl_8323E200, "hkpWorldObject", &lbl_8323AB38, 0x8C,
        0, 0, lbl_82140FAC, 2, lbl_82140FD8, 8, 0, 0, 0, 0);
}
