#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C494;
extern const hkClass lbl_8323C674;
extern const hkClassEnum lbl_82137F08[];
extern const hkClassMember lbl_82137F1C[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312F510()
{
    fn_82CEB3D8(&lbl_8323C494, "hkpConvexShape", &lbl_8323C674, 0x14,
        0, 0, lbl_82137F08, 1, lbl_82137F1C, 1, 0, 0, 0, 0);
}
