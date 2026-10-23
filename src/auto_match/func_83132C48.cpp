#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323DD20;
extern const hkClass lbl_8323D960;
extern const hkClassMember lbl_8213FE50[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83132C48()
{
    fn_82CEB3D8(&lbl_8323DD20, "hkpRagdollMotorConstraintAtom", &lbl_8323D960, 0x50,
        0, 0, 0, 0, lbl_8213FE50, 5, 0, 0, 0, 0);
}
