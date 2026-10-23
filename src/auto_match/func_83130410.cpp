#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323CE70;
extern const hkClass lbl_8323DF60;
extern const hkClassMember lbl_8213ABA8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83130410()
{
    fn_82CEB3D8(&lbl_8323CE70, "hkpDefaultWorldMemoryWatchDog", &lbl_8323DF60, 0xC,
        0, 0, 0, 0, lbl_8213ABA8, 1, 0, 0, 0, 1);
}
