#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D960;
extern const hkClassEnum lbl_8213F898[];
extern const hkClassMember lbl_83184028[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83132208()
{
    fn_82CEB3D8(&lbl_8323D960, "hkpConstraintAtom", 0, 2,
        0, 0, lbl_8213F898, 2, lbl_83184028, 1, 0, 0, 0, 0);
}
