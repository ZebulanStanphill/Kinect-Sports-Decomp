#include "havok/hkClass.h"

extern "C" {
int fn_82CEA280(void *, const hkClass *, int);
void fn_82CEA160(void *, hkMemoryAllocator *, const hkClass *, int);
const char *fn_82CEAC20(const hkClass *);              // hkClass::getName
int fn_82CFBBF0(const char *, const char *);          // hkString::strCmp
hkClassMember *fn_82CEAF20(const hkClass *, int);     // hkClass::getDeclaredMember
extern const hkClass lbl_8323AEF8;                    // hkClassMemberClass
}

// Patches hkpConstraintInstance's reflection once per visit: its declared
// member 2 gets type TYPE_STRUCT (hkClassMember's member 4 is m_type).
extern "C" void fn_83082BF0(const hkClass *klass, void *map)
{
    int flags = fn_82CEA280(map, klass, 0);
    if ((flags & 4) == 0) {
        fn_82CEA160(map, &hkMemoryRouter::getInstance().heap(), klass, flags | 4);
        if (fn_82CFBBF0(fn_82CEAC20(klass), "hkpConstraintInstance") == 0) {
            char *data = (char *)fn_82CEAF20(klass, 2);
            const hkClassMember &member = lbl_8323AEF8.getMember(4);
            data[member.m_offset] = hkClassMember::TYPE_STRUCT;
        }
    }
}
