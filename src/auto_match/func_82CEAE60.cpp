#include "havok/hkClass.h"

const hkClassEnum &hkClass::getDeclaredEnum(int enumIndex) const
{
    return m_declaredEnums[enumIndex];
}
