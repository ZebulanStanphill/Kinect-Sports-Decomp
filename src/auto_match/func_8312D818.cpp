#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323BAB4;
extern const hkClass lbl_8323BA84;
extern const hkClassMember lbl_83180D18[];
extern const char lbl_82135FF4[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312D818()
{
    fn_82CEB3D8(&lbl_8323BAB4, "hkpExtendedMeshShapeTrianglesSubpart", &lbl_8323BA84, 0x60,
        0, 0, 0, 0, lbl_83180D18, 0xB, lbl_82135FF4, 0, 0, 2);
}
