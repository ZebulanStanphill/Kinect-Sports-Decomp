#include "havok/hkClass.h"

const hkClassMember &hkClass::getMember(int memberIndex) const
{
    int numMembers;
    int localIndex;
    const hkClass *c;

    // getNumMembers(), inlined
    numMembers = m_numDeclaredMembers;
    for (c = m_parent; c != HK_NULL; c = c->m_parent) {
        numMembers = c->m_numDeclaredMembers + numMembers;
    }

    c = this;
    localIndex = memberIndex - numMembers;
    do {
        localIndex = c->m_numDeclaredMembers + localIndex;
        if (localIndex >= 0) {
            return c->m_declaredMembers[localIndex];
        }
        c = c->m_parent;
    } while (c != HK_NULL);
    return m_declaredMembers[0];
}
