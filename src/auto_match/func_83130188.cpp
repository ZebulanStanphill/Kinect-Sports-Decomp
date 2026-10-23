#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323CDC0;
extern const hkClass lbl_8323DF90;
extern const hkClassMember lbl_8213A758[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83130188()
{
    fn_82CEB3D8(&lbl_8323CDC0, "hkpConstraintChainInstanceAction", &lbl_8323DF90, 0x1C,
        0, 0, 0, 0, lbl_8213A758, 1, 0, 0, 0, 0);
}
