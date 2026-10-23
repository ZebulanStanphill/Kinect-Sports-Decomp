#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323CD80;
extern const hkClass lbl_8323CE30;
extern const hkClassMember lbl_8213A6B8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83130088()
{
    fn_82CEB3D8(&lbl_8323CD80, "hkpConstraintChainInstance", &lbl_8323CE30, 0x48,
        0, 0, 0, 0, lbl_8213A6B8, 2, 0, 0, 0, 0);
}
