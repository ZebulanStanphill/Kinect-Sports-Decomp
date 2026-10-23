#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323AEC8;
extern const hkClassEnum lbl_82130888[];
extern const hkClassMember lbl_8317EDB0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312BAB0()
{
    fn_82CEB3D8(&lbl_8323AEC8, "hkClassEnum", 0, 0x14,
        0, 0, lbl_82130888, 1, lbl_8317EDB0, 4, 0, 0, 0, 0);
}
