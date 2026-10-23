#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C1C4;
extern const hkClass lbl_8323C494;
extern const hkClassMember lbl_83181608[];
extern const char lbl_8213745C[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312EDF0()
{
    fn_82CEB3D8(&lbl_8323C1C4, "hkpTriangleShape", &lbl_8323C494, 0x60,
        0, 0, 0, 0, lbl_83181608, 7, lbl_8213745C, 0, 0, 0);
}
