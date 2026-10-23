#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C2B4;
extern const hkClass lbl_8323C254;
extern const hkClassEnum lbl_82137798[];
extern const hkClassMember lbl_821378A0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312F038()
{
    fn_82CEB3D8(&lbl_8323C2B4, "hkpCollidable", &lbl_8323C254, 0x50,
        0, 0, lbl_82137798, 1, lbl_821378A0, 6, 0, 0, 0, 0);
}
