#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D760;
extern const hkClass lbl_8323E0E0;
extern const hkClassMember lbl_8213CDC8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83131C30()
{
    fn_82CEB3D8(&lbl_8323D760, "hkpVelocityConstraintMotor", &lbl_8323E0E0, 0x20,
        0, 0, 0, 0, lbl_8213CDC8, 3, 0, 0, 0, 0);
}
