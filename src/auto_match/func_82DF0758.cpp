// hkpFirstPersonGun::getName() const (Physics/Utilities/Weapons/hkpFirstPersonGun.cpp): slot +0x1C of
// ??_7hkpFirstPersonGun@@6B@, inherited by every gun's vtable.
#include "havok/hkpFirstPersonGun.h"

const char *hkpFirstPersonGun::getName() const
{
    return m_name.cString();
}
