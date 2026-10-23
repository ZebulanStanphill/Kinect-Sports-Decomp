#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323E384;
extern const hkClassMember lbl_82142A1C[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83133B20()
{
    fn_82CEB3D8(&lbl_8323E384, "hkpMoppCodeCodeInfo", 0, 0x10,
        0, 0, 0, 0, lbl_82142A1C, 1, 0, 0, 0, 0);
}
