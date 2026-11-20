#include "havok/hkClass.h"

int hkClass::getNumMembers() const
{
    const hkClass *c = m_parent;
    int numMembers = m_numDeclaredMembers;
    if (c) {
        do {
            numMembers += c->m_numDeclaredMembers;
            c = c->m_parent;
        } while (c);
    }
    return numMembers;
}
