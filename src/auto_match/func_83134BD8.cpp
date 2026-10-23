#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323E8BC;
extern const hkClass lbl_8323E8FC;
extern const hkClassMember lbl_82144780[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83134BD8()
{
    fn_82CEB3D8(&lbl_8323E8BC, "hkpSerializedSubTrack1nInfo", &lbl_8323E8FC, 0x20,
        0, 0, 0, 0, lbl_82144780, 0x2, 0, 0, 0, 0);
}
