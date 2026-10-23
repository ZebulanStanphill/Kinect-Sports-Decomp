#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EC3C;
extern const hkClass lbl_8323F15C;
extern const hkClassMember lbl_82146510[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831354E0()
{
    fn_82CEB3D8(&lbl_8323EC3C, "hkpVehicleDefaultAnalogDriverInput", &lbl_8323F15C, 0x18,
        0, 0, 0, 0, lbl_82146510, 0x4, 0, 0, 0, 0);
}
