#include "havok/hkClass.h"

extern "C" {
int fn_82CEA280(void *, const hkClass *, int);
void fn_82CEA160(void *, hkMemoryAllocator *, const hkClass *, int);
extern const hkClass lbl_8323AEF8;                    // hkClassMemberClass
}

// Patches hkpConstraintInstance's reflection once per visit: its declared
// member 2 gets type TYPE_STRUCT (hkClassMember's member 4 is m_type).
extern "C" void fn_83082BF0(const hkClass *klass, void *map)
{
    int flags = fn_82CEA280(map, klass, 0);
    if ((flags & 4) == 0) {
        fn_82CEA160(map, &hkMemoryRouter::getInstance().heap(), klass, flags | 4);
        if (hkString::strCmp(klass->getName(), "hkpConstraintInstance") == 0) {
            char *data = (char *)&klass->getDeclaredMember(2);
            const hkClassMember &member = lbl_8323AEF8.getMember(4);
            data[member.m_offset] = hkClassMember::TYPE_STRUCT;
        }
    }
}
