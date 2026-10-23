#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D9F0;
extern const hkClass lbl_8323D960;
extern const hkClassMember lbl_8213F908[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83132370()
{
    fn_82CEB3D8(&lbl_8323D9F0, "hkpSimpleContactConstraintAtom", &lbl_8323D960, 0x30,
        0, 0, 0, 0, lbl_8213F908, 8, 0, 0, 0, 0);
}
