#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B734;
extern const hkClass lbl_8323C494;
extern const hkClassEnum lbl_82134DA4[];
extern const hkClassMember lbl_82134DB8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312CDA0()
{
    fn_82CEB3D8(&lbl_8323B734, "hkpCapsuleShape", &lbl_8323C494, 0x40,
        0, 0, lbl_82134DA4, 1, lbl_82134DB8, 2, 0, 0, 0, 0);
}
