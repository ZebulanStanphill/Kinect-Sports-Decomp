#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323D210;
extern const hkClass lbl_8323E080;
extern const hkClassEnum lbl_8213BBF0[];
extern const hkClassMember lbl_831832A8[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_83130E08()
{
    fn_82CEB3D8(&lbl_8323D210, "hkpPointToPathConstraintData", &lbl_8323E080, 0xB0,
        0, 0, lbl_8213BBF0, 1, lbl_831832A8, 5, 0, 0, 0, 0);
}
