#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D2A0;
extern const hkClass lbl_8323E0E0;
extern const hkClassMember lbl_8213BD90[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83130F78()
{
    fn_82CEB3D8(&lbl_8323D2A0, "hkpPositionConstraintMotor", &lbl_8323E0E0, 0x24,
        0, 0, 0, 0, lbl_8213BD90, 4, 0, 0, 0, 0);
}
