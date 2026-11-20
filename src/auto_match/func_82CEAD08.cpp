#include "havok/hkClass.h"

// Enums declared by this class and its parents.
int hkClass::getNumEnums() const
{
    int numEnums = m_numDeclaredEnums;
    for (const hkClass *c = m_parent; c != HK_NULL; c = c->m_parent) {
        numEnums += c->m_numDeclaredEnums;
    }
    return numEnums;
}
