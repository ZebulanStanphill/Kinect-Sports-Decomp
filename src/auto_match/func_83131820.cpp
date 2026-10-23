#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D5D0;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_8213C928[];
extern const hkClassMember lbl_831835E8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83131820()
{
    fn_82CEB3D8(&lbl_8323D5D0, "hkpSimulation", &lbl_8323AB38, 0x2C,
        0, 0, lbl_8213C928, 3, lbl_831835E8, 9, 0, 0, 1, 0);
}
