// hkpProjectileGun::hkpProjectileGun(hkFinishLoadedObjectFlag) (Physics/Utilities/Weapons/hkpProjectileGun.h):
// hkpFirstPersonGun's finish constructor, the class vtable, then an empty m_projectiles array (+nosave, so
// it is default-constructed).
#include "havok/hkpProjectileGun.h"

hkpProjectileGun::hkpProjectileGun(hkFinishLoadedObjectFlag flag) : hkpFirstPersonGun(flag), m_projectiles() {}
