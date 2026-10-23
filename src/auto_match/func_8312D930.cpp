#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323BB14;
extern const hkClass lbl_8323C614;
extern const hkClassEnum lbl_82135FB8[];
extern const hkClassMember lbl_83180E20[];
extern const char lbl_83180BEC[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312D930()
{
    fn_82CEB3D8(&lbl_8323BB14, "hkpExtendedMeshShape", &lbl_8323C614, 0xF0,
        0, 0, lbl_82135FB8, 3, lbl_83180E20, 0xD, lbl_83180BEC, 0, 0, 2);
}
