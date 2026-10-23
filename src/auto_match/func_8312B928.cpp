#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323AE38;
extern const hkClassMember lbl_82130720[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312B928()
{
    fn_82CEB3D8(&lbl_8323AE38, "hkBitField", 0, 0x10,
        0, 0, 0, 0, lbl_82130720, 2, 0, 0, 0, 0);
}
