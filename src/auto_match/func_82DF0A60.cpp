#include "havok/hkBase.h"
#include "havok/hkpFirstPersonGun.h"

extern "C" {
extern const char lbl_82196582[];                                 // ""
}

hkpFirstPersonGun::hkpFirstPersonGun()
    : m_type(WEAPON_TYPE_INVALID), m_name(lbl_82196582), m_keyboardKey(HK_KEY_Q)
{
}
