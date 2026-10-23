#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323B804;
extern const hkClassMember lbl_82135210[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312CFF0()
{
    fn_82CEB3D8(&lbl_8323B804, "hkpCompressedMeshShapeConvexPiece", 0, 0x40,
        0, 0, 0, 0, lbl_82135210, 6, 0, 0, 0, 3);
}
