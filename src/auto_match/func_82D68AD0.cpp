// Swaps the shape of each flagged body for a new hkpCapsuleShape grown by the extra radius,
// keeping the original body pointer in saved[] (fn_82D68A78 restores them).
#include "havok/hkpShape.h"
#include "havok/hkVector4.h"

class hkpCapsuleShape : public hkpConvexShape
{
  public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpCapsuleShape(const hkVector4 &vertexA, const hkVector4 &vertexB, hkReal radius);

    hkVector4 m_vertexA; // +0x20
    hkVector4 m_vertexB; // +0x30
};

class hkpCdBody
{
  public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();

    hkpCdBody(const hkpCdBody *parent)
    {
        m_motion = parent->m_motion;
        m_parent = parent;
    }

    void setShape(const hkpShape *shape, hkUint32 key)
    {
        m_shape = shape;
        m_shapeKey = key;
    }

    const hkpShape *m_shape;   // +0x0
    hkUint32 m_shapeKey;       // +0x4
    const void *m_motion;      // +0x8
    const hkpCdBody *m_parent; // +0xc
};

extern "C" float fn_82D40860(const hkpCapsuleShape *shape);

static HK_FORCE_INLINE hkReal ExpandedRadius(const hkpCapsuleShape *capsule)
{
    hkReal radius = capsule->m_radius;
    return radius + fn_82D40860(capsule) + 0.002f;
}

extern "C" void fn_82D68AD0(const hkpCdBody **bodies[2], const int expand[2], hkpCdBody *storage,
                            const hkpCdBody *saved[2])
{
    int i;

    for (i = 0; i < 2; i++) {
        if (expand[i] != 0) {
            const hkpCapsuleShape *capsule = static_cast<const hkpCapsuleShape *>((*bodies[i])->m_shape);
            hkpCapsuleShape *expanded =
                new hkpCapsuleShape(capsule->m_vertexA, capsule->m_vertexB, ExpandedRadius(capsule));
            hkpCdBody *body = &storage[i];
            new (body) hkpCdBody(*bodies[i]);
            body->setShape(expanded, 0xffffffff);
            saved[i] = *bodies[i];
            *bodies[i] = body;
        } else {
            saved[i] = 0;
        }
    }
}
