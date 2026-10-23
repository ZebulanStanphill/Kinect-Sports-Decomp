#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323C224;
extern const hkClassMember lbl_821375AC[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312EEE0()
{
    fn_82CEB3D8(&lbl_8323C224, "hkpBroadPhaseHandle", 0, 4,
        0, 0, 0, 0, lbl_821375AC, 1, 0, 0, 0, 0);
}
