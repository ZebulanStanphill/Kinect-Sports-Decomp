#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D590;
extern const hkClass lbl_8323E1A0;
extern const hkClassMember lbl_8213C740[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83131728()
{
    fn_82CEB3D8(&lbl_8323D590, "hkpSimpleShapePhantom", &lbl_8323E1A0, 0x170,
        0, 0, 0, 0, lbl_8213C740, 2, 0, 0, 0, 0);
}
