// hkpFirstPersonGun::hkpFirstPersonGun(hkFinishLoadedObjectFlag) (Physics/Utilities/Weapons/hkpFirstPersonGun.h):
// the vtable, m_name's finish constructor (fn_82CED308), an empty listener array, and when finishing
// m_type = WEAPON_TYPE_INVALID.
#include "havok/hkpFirstPersonGun.h"

hkpFirstPersonGun::hkpFirstPersonGun(hkFinishLoadedObjectFlag flag)
    : hkReferencedObject(flag), m_name(flag), m_listeners()
{
    if (flag.m_finishing) {
        m_type = WEAPON_TYPE_INVALID;
    }
}
