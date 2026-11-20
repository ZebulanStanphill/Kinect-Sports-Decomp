#include "havok/hkClassMember.h"

const hkClassEnum &hkClassMember::getEnumClass() const
{
    return *m_enum;
}
