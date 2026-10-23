#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323DE40;
extern const hkClass lbl_8323DDE0;
extern const hkClassMember lbl_82140090[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83132F48()
{
    fn_82CEB3D8(&lbl_8323DE40, "hkpMassChangerModifierConstraintAtom", &lbl_8323DDE0, 0x40,
        0, 0, 0, 0, lbl_82140090, 2, 0, 0, 0, 1);
}
