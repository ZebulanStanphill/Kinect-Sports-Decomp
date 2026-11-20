#include "havok/hkClass.h"

const hkClassMember &hkClass::getDeclaredMember(int memberIndex) const
{
    return m_declaredMembers[memberIndex];
}
