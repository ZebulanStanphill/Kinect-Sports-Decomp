#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323DBD0;
extern const hkClass lbl_8323D960;
extern const hkClassMember lbl_8213FB78[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831328C0()
{
    fn_82CEB3D8(&lbl_8323DBD0, "hkp2dAngConstraintAtom", &lbl_8323D960, 4,
        0, 0, 0, 0, lbl_8213FB78, 1, 0, 0, 0, 0);
}
