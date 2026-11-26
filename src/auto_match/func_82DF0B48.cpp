// hkpFirstPersonGun::~hkpFirstPersonGun (Physics/Utilities/Weapons/hkpFirstPersonGun.cpp): releases every
// bullet listener, then the members are destroyed in reverse order (the listener hkArray at +0x14, the
// m_name hkStringPtr at +0xc) and hkBaseObject's vtable is stored.
#include "havok/hkBase.h"
#include "havok/hkpFirstPersonGun.h"

hkpFirstPersonGun::~hkpFirstPersonGun()
{
    for (int i = 0; i < m_listeners.getSize(); i++) {
        fn_82CE4118(m_listeners[i]);   // removeReference(); the direct call keeps the original lwzx operand order
    }
}
