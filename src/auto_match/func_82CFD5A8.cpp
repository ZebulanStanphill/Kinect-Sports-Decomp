#include "havok/hkClassMember.h"

const hkClass &hkClassMember::getStructClass() const
{
    return *m_class;
}
