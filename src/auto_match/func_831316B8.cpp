#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D560;
extern const hkClassMember lbl_8213C728[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831316B8()
{
    fn_82CEB3D8(&lbl_8323D560, "hkpSimpleShapePhantomCollisionDetail", 0, 4,
        0, 0, 0, 0, lbl_8213C728, 1, 0, 0, 1, 0);
}
