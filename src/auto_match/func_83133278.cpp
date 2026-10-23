#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323DF90;
extern const hkClass lbl_8323AB38;
extern const hkClassMember lbl_82140598[];
extern const hkCustomAttributes lbl_8214058C;
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83133278()
{
    fn_82CEB3D8(&lbl_8323DF90, "hkpAction", &lbl_8323AB38, 0x18,
        0, 0, 0, 0, lbl_82140598, 4, 0, &lbl_8214058C, 0, 0);
}
