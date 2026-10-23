#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C284;
extern const hkClassMember lbl_821377B0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312EFC8()
{
    fn_82CEB3D8(&lbl_8323C284, "hkpCollidableBoundingVolumeData", 0, 0x2C,
        0, 0, 0, 0, lbl_821377B0, 0xA, 0, 0, 0, 0);
}
