#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323ACB8;
extern const hkClassEnum lbl_821304BC[];
extern const hkClassMember lbl_8317EBC8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312B520()
{
    fn_82CEB3D8(&lbl_8323ACB8, "hkGizmoAttribute", 0, 0xC,
        0, 0, lbl_821304BC, 1, lbl_8317EBC8, 3, 0, 0, 0, 0);
}
