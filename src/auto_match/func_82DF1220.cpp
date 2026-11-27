// hkpGravityGun::reset(hkpWorld *) (Physics/Utilities/Weapons/hkpGravityGun.cpp): slot +0x20 of
// ??_7hkpGravityGun@@6B@. Releases the grabbed bodies.
#include "havok/hkpRigidBody.h"
#include "havok/hkpGravityGun.h"

void hkpGravityGun::reset(hkpWorld *world)
{
    for (int i = 0; i < m_grabbedBodies.getSize(); i++) {
        m_grabbedBodies[i]->removeReference();
    }
    m_grabbedBodies.m_size = 0;
}
