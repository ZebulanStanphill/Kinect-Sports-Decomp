#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_832654F0;
extern const hkClassMember lbl_82187020[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83139BF8()
{
    fn_82CEB3D8(&lbl_832654F0, "hkClass", 0, 0x24,
        0, 0, 0, 0, lbl_82187020, 7, 0, 0, 0, 0);
}
