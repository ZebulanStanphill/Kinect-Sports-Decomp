#include "havok/hkClass.h"

extern "C" const hkClassMember::TypeProperties lbl_8317F680[];

extern "C" int fn_82CFD870(const hkClassMember *member)
{
    unsigned int t = member->m_subtype;
    if (t != hkClassMember::TYPE_ENUM && t != hkClassMember::TYPE_FLAGS) {
        if (t != hkClassMember::TYPE_STRUCT) {
            return lbl_8317F680[t].m_size;
        }
        return member->m_class->getObjectSize();
    }
    return -1;
}
