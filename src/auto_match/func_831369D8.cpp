#include "havok/hkBase.h"
class hkClassEnum;
class hkClassMember;
class hkCustomAttributes;
extern "C" {
extern hkClass lbl_8323F46C;
extern const hkClass lbl_8323F89C;
extern const hkClassMember lbl_82148464[];
void fn_82CEB3D8(hkClass *self, const char *name, const hkClass *parent,
    int objectSize, const hkClass **interfaces, int numInterfaces,
    const hkClassEnum *enums, int numEnums,
    const hkClassMember *members, int numMembers, const void *defaults,
    const hkCustomAttributes *attributes, unsigned int flags, int version);
}

extern "C" void fn_831369D8()
{
    fn_82CEB3D8(&lbl_8323F46C, "hkxSparselyAnimatedEnum", &lbl_8323F89C, 0x24,
        0, 0, 0, 0, lbl_82148464, 1, 0, 0, 0, 1);
}
