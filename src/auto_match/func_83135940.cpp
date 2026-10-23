#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323EDEC;
extern const hkClassMember lbl_82146F88[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83135940()
{
    fn_82CEB3D8(&lbl_8323EDEC, "hkpVehicleInstanceWheelInfo", 0, 0xE0,
        0, 0, 0, 0, lbl_82146F88, 0x11, 0, 0, 0, 1);
}
