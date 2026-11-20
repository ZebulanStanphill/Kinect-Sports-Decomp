#include "havok/hkClass.h"

// Implemented interfaces, this class's and its parents'.
int hkClass::getNumInterfaces() const
{
    int numInterfaces = m_numImplementedInterfaces;
    for (const hkClass *c = m_parent; c != HK_NULL; c = c->m_parent) {
        numInterfaces += c->m_numImplementedInterfaces;
    }
    return numInterfaces;
}
