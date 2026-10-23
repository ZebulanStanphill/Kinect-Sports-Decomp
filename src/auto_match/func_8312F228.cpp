#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C374;
extern const hkClass lbl_8323C224;
extern const hkClassMember lbl_82137A18[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312F228()
{
    fn_82CEB3D8(&lbl_8323C374, "hkpTypedBroadPhaseHandle", &lbl_8323C224, 0xC,
        0, 0, 0, 0, lbl_82137A18, 4, 0, 0, 0, 0);
}
