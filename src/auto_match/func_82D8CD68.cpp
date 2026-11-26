// hkpAabbPhantom::setAabb(const hkAabb &) (Physics/Dynamics/Phantom/hkpAabbPhantom.cpp): copies the box into
// m_aabb and updates the broad phase with it.
#include "havok/hkpAabbPhantom.h"

void hkpAabbPhantom::setAabb(const hkAabb &newAabb)
{
    m_aabb = newAabb;
    updateBroadPhase(m_aabb);
}
