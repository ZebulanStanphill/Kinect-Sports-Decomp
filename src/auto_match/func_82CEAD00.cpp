#include "havok/hkClass.h"

int hkClass::getNumDeclaredInterfaces() const
{
    return m_numImplementedInterfaces;
}
