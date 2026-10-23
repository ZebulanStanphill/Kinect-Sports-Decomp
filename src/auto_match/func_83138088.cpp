#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323FB9C;
extern const hkClass lbl_8323AB38;
extern const hkClassEnum lbl_8214A008[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83138088()
{
    fn_82CEB3D8(&lbl_8323FB9C, "hkResourceBase", &lbl_8323AB38, 8,
        0, 0, lbl_8214A008, 1, 0, 0, 0, 0, 0, 0);
}
