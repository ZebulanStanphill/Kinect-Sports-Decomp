#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323E110;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_82140C98[];
extern const hkClassMember lbl_83184170[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83133678()
{
    fn_82CEB3D8(&lbl_8323E110, "hkpMotion", &lbl_8323AB38, 0x120,
        0, 0, lbl_82140C98, 1, lbl_83184170, 0xC, 0, 0, 0, 3);
}
