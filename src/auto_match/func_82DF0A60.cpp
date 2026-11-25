#include "havok/hkBase.h"

extern "C" {
extern const char lbl_82196582[];                                 // ""
}

class hkpFirstPersonGunBulletListener;
class hkpWorld;

class hkpFirstPersonGun : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    enum Type { WEAPON_TYPE_INVALID = 0, WEAPON_TYPE_BALLGUN, WEAPON_TYPE_GRENADEGUN, WEAPON_TYPE_GRAVITYGUN,
                WEAPON_TYPE_MOUNTEDBALLGUN, WEAPON_TYPE_TWEAKERGUN, WEAPON_TYPE_MISSILEGUN };
    enum { HK_KEY_Q = 0x71 };

    hkpFirstPersonGun();
    virtual ~hkpFirstPersonGun();

    hkUint8 m_type;                                          // +0x8 hkEnum<Type, hkUint8>
    hkStringPtr m_name;                                      // +0xc
    hkUint8 m_keyboardKey;                                   // +0x10 hkEnum<hkKeyboardCommand, hkUint8>
    hkArray<hkpFirstPersonGunBulletListener *> m_listeners;  // +0x14
};

hkpFirstPersonGun::hkpFirstPersonGun()
    : m_type(WEAPON_TYPE_INVALID), m_name(lbl_82196582), m_keyboardKey(HK_KEY_Q)
{
}
