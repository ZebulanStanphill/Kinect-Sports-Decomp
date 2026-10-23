#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323AB38;
extern const hkClass lbl_8323B138;
extern const hkClassMember lbl_821300A4[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_8312B140()
{
    fn_82CEB3D8(&lbl_8323AB38, "hkReferencedObject", &lbl_8323B138, 8,
        0, 0, 0, 0, lbl_821300A4, 2, 0, 0, 0, 0);
}
