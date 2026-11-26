// hkpShapePhantom::setPosition(const hkVector4 &position, hkReal extraTolerance) (Havok 2010,
// Physics/Dynamics/Phantom/hkpShapePhantom.cpp). Havok code, /O2 (flag file).
// 0.5f is __real@3f000000 (Matching units reference it), a selectany definition.
#include "havok/hkpShapePhantom.h"
#include "havok/hkAabb.h"

struct hkpProcessCollisionInput {
    char m_pad0[8];
    hkReal m_tolerance;   // +0x8 (hkpCollisionInput::m_tolerance)
};

class hkpWorld {
public:
    HK_FORCE_INLINE const hkpProcessCollisionInput *getCollisionInput() const { return m_collisionInput; }
    char m_pad0[0x78];
    hkpProcessCollisionInput *m_collisionInput;   // +0x78
};

extern "C" void fn_82D9A730(hkpPhantom *self, const hkAabb &aabb);   // hkpPhantom::updateBroadPhase

extern "C" void fn_82D99EA0(hkpShapePhantom *self, const hkVector4 &position, hkReal extraTolerance)
{
    self->m_motionState.getTransform().setTranslation(position);
    if (self->m_world) {
        hkAabb aabb;
        self->m_collidable.getShape()->getAabb(self->m_motionState.getTransform(),
                                               self->m_world->getCollisionInput()->m_tolerance * 0.5f + extraTolerance,
                                               aabb);
        fn_82D9A730(self, aabb);
    }
}
