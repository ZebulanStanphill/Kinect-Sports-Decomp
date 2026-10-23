#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323CD20;
extern const hkClass lbl_8323E0E0;
extern const hkClassEnum lbl_8213A58C[];
extern const hkClassMember lbl_83182CE0[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312FFA0()
{
    fn_82CEB3D8(&lbl_8323CD20, "hkpCallbackConstraintMotor", &lbl_8323E0E0, 0x28,
        0, 0, lbl_8213A58C, 1, lbl_83182CE0, 5, 0, 0, 0, 0);
}
