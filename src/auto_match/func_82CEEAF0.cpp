#include "havok/hkClass.h"

extern "C" int fn_82CEEAF0(const hkClassMember *member)
{
    if (member->m_subtype != hkClassMember::TYPE_VOID) {
        const hkClassMember::TypeProperties &props =
            hkClassMember::getClassMemberTypeProperties((hkClassMember::Type)member->m_subtype);
        if (props.m_size > 0) return props.m_size;
        if (props.m_type == hkClassMember::TYPE_STRUCT) {
            return member->getStructClass().getObjectSize();
        }
    }
    return -1;
}
