#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B944;
extern const hkClass lbl_8323C4C4;
extern const hkClassMember lbl_821358C0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312D3D0()
{
    fn_82CEB3D8(&lbl_8323B944, "hkpConvexTranslateShape", &lbl_8323C4C4, 0x30,
        0, 0, 0, 0, lbl_821358C0, 1, 0, 0, 0, 0);
}
