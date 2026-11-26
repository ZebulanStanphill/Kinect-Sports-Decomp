// hkpShapePhantom::setTransform(const hkTransform &transform) (Havok 2010,
// Physics/Dynamics/Phantom/hkpShapePhantom.cpp). Havok code, /O2 (flag file).
// 0.5f is __real@3f000000 (Matching units reference it), a selectany definition.
#include "havok/hkAabb.h"
#include "havok/hkpCollisionInput.h"
#include "havok/hkpShapePhantom.h"
#include "havok/hkpWorld.h"

struct hkpProcessCollisionInput : public hkpCollisionInput {
};

void hkpShapePhantom::setTransform(const hkTransform &transform)
{
    m_motionState.getTransform() = transform;
    if (m_world) {
        hkAabb aabb;
        m_collidable.getShape()->getAabb(transform, m_world->getCollisionInput()->m_tolerance * 0.5f, aabb);
        updateBroadPhase(aabb);
    }
}
