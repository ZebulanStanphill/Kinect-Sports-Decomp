// hkpShapePhantom::setTransform(const hkTransform &transform) (Havok 2010,
// Physics/Dynamics/Phantom/hkpShapePhantom.cpp). Havok code, /O2 (flag file).
// 0.5f is __real@3f000000 (Matching units reference it), a selectany definition.
#include "havok/hkAabb.h"
#include "havok/hkpCollisionInput.h"
#include "havok/hkpShapePhantom.h"

struct hkpProcessCollisionInput : public hkpCollisionInput {
};

class hkpWorld {
public:
    HK_FORCE_INLINE const hkpProcessCollisionInput *getCollisionInput() const { return m_collisionInput; }
    char m_pad0[0x78];
    hkpProcessCollisionInput *m_collisionInput;   // +0x78
};

HK_FORCE_INLINE void hkpShapePhantom::setTransform(const hkTransform &transform)
{
    m_motionState.getTransform() = transform;
    if (m_world) {
        hkAabb aabb;
        m_collidable.getShape()->getAabb(transform, m_world->getCollisionInput()->m_tolerance * 0.5f, aabb);
        updateBroadPhase(aabb);
    }
}

extern "C" void fn_82D99E00(hkpShapePhantom *self, const hkTransform &transform)
{
    self->setTransform(transform);
}
