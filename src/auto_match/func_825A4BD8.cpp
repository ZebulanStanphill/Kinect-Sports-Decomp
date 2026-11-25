#include "havok/hkpShape.h"
#include "havok/hkTransform.h"

class hkAabb
{
  public:
    hkVector4 m_min; // +0x00
    hkVector4 m_max; // +0x10
};

class hkpSphereShape : public hkpConvexShape
{
  public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpSphereShape(hkReal radius);

    hkUint32 m_pad[3]; // +0x14
};

struct Body_825A4BD8 {
    char pad0[0x8];
    hkpShape *shape; // +0x8
};

static HK_FORCE_INLINE void SetIdentity(hkTransform &transform)
{
    hkVector4 zero;

    zero.setZero4();
    transform.m_rotation.m_col0 = zero;
    transform.m_rotation.m_col1 = zero;
    transform.m_rotation.m_col2 = zero;
    transform.m_rotation.m_col0(0) = 1.0f;
    transform.m_rotation.m_col1(1) = 1.0f;
    transform.m_rotation.m_col2(2) = 1.0f;
    transform.m_translation.setZero4();
}

static HK_FORCE_INLINE hkReal Max(hkReal a, hkReal b)
{
    return a - b >= 0.0f ? a : b;
}

// Replaces a sphere shape by a new sphere whose radius is the old one's scaled by the largest
// component of scale.
extern "C" hkpShape *fn_825A4BD8(Body_825A4BD8 *self, __vector4 scale)
{
    hkpShape *shape = self->shape;

    if (shape != HK_NULL) {
        if (static_cast<hkpShapeType>(shape->m_type) == HK_SHAPE_SPHERE) {
            hkTransform transform;
            hkAabb aabb;
            hkReal largest;
            hkReal radius;

            SetIdentity(transform);
            shape->getAabb(transform, 0.0f, aabb);
            radius = aabb.m_max(0);
            largest = Max(scale.vector4_f32[0], scale.vector4_f32[1]);
            return new hkpSphereShape(Max(largest, scale.vector4_f32[2]) * radius);
        }
    } else {
        shape = HK_NULL;
    }
    return shape;
}
