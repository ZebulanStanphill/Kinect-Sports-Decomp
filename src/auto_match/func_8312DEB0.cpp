#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323BCB4;
extern const hkClass lbl_8323C3D4;
extern const hkClassMember lbl_82136688[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312DEB0()
{
    fn_82CEB3D8(&lbl_8323BCB4, "hkMoppBvTreeShapeBase", &lbl_8323C3D4, 0x30,
        0, 0, 0, 0, lbl_82136688, 4, 0, 0, 0, 0);
}
