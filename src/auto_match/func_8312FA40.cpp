#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323CB60;
extern const hkClass lbl_8323E170;
extern const hkClassMember lbl_82139E48[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312FA40()
{
    fn_82CEB3D8(&lbl_8323CB60, "hkpAabbPhantom", &lbl_8323E170, 0xE0,
        0, 0, 0, 0, lbl_82139E48, 3, 0, 0, 0, 0);
}
