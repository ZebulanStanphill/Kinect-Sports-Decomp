#include "havok/hkClassMember.h"

extern "C" char lbl_82196582[];
extern "C" char lbl_821AC4B4[];

extern "C" void fn_82D04AB8(void *str, const char *s);
extern "C" void fn_82D04C78(void *str, const char *s);

extern "C" void fn_82E0E5A8(int type, int subType, void *str)
{
    fn_82D04AB8(str, lbl_82196582);
    if ((type >= 1 && type <= 0x12) || type == 0x1e) {
        if (type == 1 || (type >= 0xc && type <= 0x12))
            fn_82D04AB8(str, lbl_821AC4B4);
        fn_82D04C78(str, hkClassMember::getClassMemberTypeProperties((hkClassMember::Type)type).m_name);
    } else if (type == 0x18 || type == 0x1f) {
        fn_82D04AB8(str, hkClassMember::getClassMemberTypeProperties((hkClassMember::Type)subType).m_name);
    }
}
