// hkpFirstPersonGun::~hkpFirstPersonGun (Physics/Utilities/Weapons/hkpFirstPersonGun.cpp): releases every
// bullet listener, then the members are destroyed in reverse order (the listener hkArray at +0x14, the
// m_name hkStringPtr at +0xc) and hkBaseObject's vtable is stored.
#include "havok/hkBase.h"

class hkpFirstPersonGunBulletListener : public hkReferencedObject {
};

class hkpFirstPersonGun : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    virtual ~hkpFirstPersonGun();

    hkUint8 m_type;                                          // +0x8 hkEnum<Type, hkUint8>
    hkStringPtr m_name;                                      // +0xc
    int m_keyboardKey;                                       // +0x10
    hkArray<hkpFirstPersonGunBulletListener *> m_listeners;  // +0x14
};

hkpFirstPersonGun::~hkpFirstPersonGun()
{
    for (int i = 0; i < m_listeners.getSize(); i++) {
        fn_82CE4118(m_listeners[i]);   // removeReference(); the direct call keeps the original lwzx operand order
    }
}
