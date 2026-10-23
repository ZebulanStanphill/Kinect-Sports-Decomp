#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323ECFC;
extern const hkClass lbl_8323F1BC;
extern const hkClassMember lbl_82146958[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831356D0()
{
    fn_82CEB3D8(&lbl_8323ECFC, "hkpVehicleDefaultSteering", &lbl_8323F1BC, 0x1c,
        0, 0, 0, 0, lbl_82146958, 0x3, 0, 0, 0, 0);
}
