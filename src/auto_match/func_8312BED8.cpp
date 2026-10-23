#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B078;
extern const hkClassMember lbl_82131C00[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312BED8()
{
    fn_82CEB3D8(&lbl_8323B078, "hkMotionState", 0, 0xB0,
        0, 0, 0, 0, lbl_82131C00, 9, 0, 0, 0, 0);
}
