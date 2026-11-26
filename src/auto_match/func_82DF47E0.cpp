// hkpProjectileGun::hkpProjectileGun(hkpWorld *world, hkdWorld *destructionWorld)
// (Physics/Utilities/Weapons). The reload time is the literal 0.3f; the game's folded copy is
// lbl_82186E74, so this matches only with it named __real@3e99999a in the rename map (an extern
// constant's load is scheduled differently from a literal's).
#include "havok/hkBase.h"
#include "havok/hkpProjectileGun.h"

hkpProjectileGun::hkpProjectileGun(hkpWorld *world, hkdWorld *destructionWorld)
    : m_maxProjectiles(5), m_reloadTime(0.3f), m_reload(0.0f), m_world(world), m_destructionWorld(destructionWorld)
{
}
