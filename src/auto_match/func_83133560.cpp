#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323E0B0;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_82140B08[];
extern const hkClassMember lbl_8318414C[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83133560()
{
    fn_82CEB3D8(&lbl_8323E0B0, "hkpConstraintMotor", &lbl_8323AB38, 0xC,
        0, 0, lbl_82140B08, 1, lbl_8318414C, 1, 0, 0, 0, 0);
}
