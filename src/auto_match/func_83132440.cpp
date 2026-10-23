#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323DA20;
extern const hkClass lbl_8323D960;
extern const hkClassMember lbl_8213F9C8[];
extern const char lbl_83183E64[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83132440()
{
    fn_82CEB3D8(&lbl_8323DA20, "hkpBallSocketConstraintAtom", &lbl_8323D960, 8,
        0, 0, 0, 0, lbl_8213F9C8, 3, lbl_83183E64, 0, 0, 1);
}
