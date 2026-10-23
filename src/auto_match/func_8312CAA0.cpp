#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B5E0;
extern const hkClassEnum lbl_821342EC[];
extern const hkClassMember lbl_8317FA40[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312CAA0()
{
    fn_82CEB3D8(&lbl_8323B5E0, "hkMeshSection", 0, 0x28,
        0, 0, lbl_821342EC, 2, lbl_8317FA40, 0xA, 0, 0, 0, 1);
}
