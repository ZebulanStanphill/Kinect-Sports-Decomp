#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323AA78;
extern const hkClassEnum lbl_8212FF08[];
extern const hkClassMember lbl_8317E848[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312AF48()
{
    fn_82CEB3D8(&lbl_8323AA78, "hkMonitorStreamFrameInfo", 0, 0x24,
        0, 0, lbl_8212FF08, 1, lbl_8317E848, 9, 0, 0, 0, 0);
}
