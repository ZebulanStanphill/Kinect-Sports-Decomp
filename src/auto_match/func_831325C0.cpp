#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323DAB0;
extern const hkClass lbl_8323D960;
extern const hkClassMember lbl_8213FA58[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831325C0()
{
    fn_82CEB3D8(&lbl_8323DAB0, "hkpSetLocalTranslationsConstraintAtom", &lbl_8323D960, 0x30,
        0, 0, 0, 0, lbl_8213FA58, 2, 0, 0, 0, 0);
}
