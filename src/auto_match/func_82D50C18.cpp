// hkpTransformShape::setTransform(const hkTransform &) (Physics/Collide/Shape/Misc/Transform/hkpTransformShape.cpp):
// copies the transform, then sets m_rotation from the copied member's rotation (hkQuaternion::set(const hkRotation &)
// is out of line, fn_82CE5990). Same class layout as the Matching constructor func_82D50C58.
// No unit references fn_82D50C18, so it is renamed.
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

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
    const hkRotation &getRotation() const { return m_rotation; }
    hkRotation m_rotation;     // +0x0
    hkVector4 m_translation;   // +0x30
};

class hkQuaternion {
public:
    hkVector4 m_vec;
};

// hkQuaternion::set(const hkRotation &) is out of line (fn_82CE5990).
extern "C" void fn_82CE5990(hkQuaternion *self, const hkRotation &r);

class hkpTransformShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    void setTransform(const hkTransform &transform);

    hkpSingleShapeContainer m_childShape;   // +0x10
    int m_childShapeSize;                   // +0x18
    hkQuaternion m_rotation;                // +0x20
    hkTransform m_transform;                // +0x30
};

void hkpTransformShape::setTransform(const hkTransform &transform)
{
    m_transform = transform;
    fn_82CE5990(&m_rotation, m_transform.getRotation());
}
