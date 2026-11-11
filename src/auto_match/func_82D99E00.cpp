// hkpShapePhantom::setTransform(const hkTransform &transform) (Havok 2010,
// Physics/Dynamics/Phantom/hkpShapePhantom.cpp). Havok code, /O2 (flag file).
// 0.5f is lbl_82002C5C (Matching units reference it), a selectany definition.
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" __declspec(selectany) const float lbl_82002C5C = 0.5f;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    hkQuadReal m_quad;
};
class hkRotation {
public:
    hkVector4 m_col0, m_col1, m_col2;
};
class hkTransform {
public:
    hkRotation m_rotation;
    hkVector4 m_translation;
};
class hkAabb {
public:
    hkVector4 m_min;
    hkVector4 m_max;
};

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

class hkpShapePhantom : public hkReferencedObject {
public:
    void setTransform(const hkTransform &transform);
    void updateBroadPhase(const hkAabb &aabb);

    hkpWorld *m_world;          // +0x8
    hkUlong m_userData;         // +0xC
    const hkpShape *m_shape;    // +0x10 m_collidable.m_shape
    char m_pad14[0x9c];
    hkTransform m_transform;    // +0xB0 m_motionState.m_transform
};

extern "C" void fn_82D9A730(hkpShapePhantom *self, const hkAabb &aabb);   // hkpPhantom::updateBroadPhase
HK_FORCE_INLINE void hkpShapePhantom::updateBroadPhase(const hkAabb &aabb) { fn_82D9A730(this, aabb); }

HK_FORCE_INLINE void hkpShapePhantom::setTransform(const hkTransform &transform)
{
    m_transform = transform;
    if (m_world) {
        hkAabb aabb;
        m_shape->getAabb(transform, m_world->getCollisionInput()->m_tolerance * lbl_82002C5C, aabb);
        updateBroadPhase(aabb);
    }
}

extern "C" void fn_82D99E00(hkpShapePhantom *self, const hkTransform &transform)
{
    self->setTransform(transform);
}
