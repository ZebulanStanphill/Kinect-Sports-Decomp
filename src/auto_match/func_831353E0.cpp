#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EBDC;
extern const hkClass lbl_8323F09C;
extern const hkClassMember lbl_82146378[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831353E0()
{
    fn_82CEB3D8(&lbl_8323EBDC, "hkpVehicleDefaultAerodynamics", &lbl_8323F09C, 0x30,
        0, 0, 0, 0, lbl_82146378, 0x5, 0, 0, 0, 0);
}
