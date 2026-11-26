// hkpFirstPersonGun::hkpFirstPersonGun(hkFinishLoadedObjectFlag) (Physics/Utilities/Weapons/hkpFirstPersonGun.h):
// the vtable, m_name's finish constructor (fn_82CED308), an empty listener array, and when finishing
// m_type = WEAPON_TYPE_INVALID. It keeps its fn_ name (a Matching unit calls it), so the constructor
// is called explicitly.
#include "havok/hkpFirstPersonGun.h"

// Forced inline, so that the explicit constructor call below compiles to the constructor's body.
HK_FORCE_INLINE hkpFirstPersonGun::hkpFirstPersonGun(hkFinishLoadedObjectFlag flag)
    : hkReferencedObject(flag), m_name(flag), m_listeners()
{
    if (flag.m_finishing) {
        m_type = WEAPON_TYPE_INVALID;
    }
}

extern "C" hkpFirstPersonGun *fn_82DF0AD8(hkpFirstPersonGun *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpFirstPersonGun::hkpFirstPersonGun(flag);
    return self;
}
