#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323FBCC;
extern const hkClass lbl_8323FB9C;
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831380F8()
{
    fn_82CEB3D8(&lbl_8323FBCC, "hkResourceHandle", &lbl_8323FB9C, 8,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
