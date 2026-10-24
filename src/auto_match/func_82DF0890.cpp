// Casts a sphere of the given radius from `from` to `to` through the world (hkpWorld::linearCast,
// fn_82D820E0) with a closest-point collector, and reports the closest hit (position, normal, body
// and shape key) or, without a hit, the end point. Returns 1 when nothing was hit. Keeps its fn_ name.
// Havok code: /O2 /QVMXReserve (flag file).
//
// HK_REAL_MAX, HK_REAL_EPSILON and 1.0f are literals: the configured lbl_ floats are defined
// (selectany) and used once in linearCastSphere_bindConstants first, so that the compiler
// materializes the literals from them (one load per value, scheduled like a literal).
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" __vector4 __vxor(__vector4, __vector4);
extern "C" __vector4 __vrlimi(__vector4, __vector4, unsigned int, unsigned int);

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    HK_FORCE_INLINE void setXYZ_W(const hkVector4 &xyz, const hkVector4 &w) { m_quad = __vrlimi(xyz.m_quad, w.m_quad, 1, 0); }
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

extern "C" {
__declspec(selectany) extern const float lbl_82002AE0 = 1.0f;
__declspec(selectany) extern const float lbl_82134508 = 3.40282e+38f;     // HK_REAL_MAX
__declspec(selectany) extern const float lbl_82057518 = 1.192092896e-07f; // HK_REAL_EPSILON
extern hkVector4 lbl_8323B1A0;   // the zero vector (hkVector4::getZero())
}

// Makes the configured names the compiler's constant-pool entries for these values (see above).
void linearCastSphere_bindConstants(float *out)
{
    out[0] = lbl_82002AE0;
    out[1] = lbl_82134508;
    out[2] = lbl_82057518;
}

#define HK_REAL_MAX 3.40282e+38f
#define HK_REAL_EPSILON 1.192092896e-07f

class hkMatrix3 {
public:
    HK_FORCE_INLINE void setIdentity()
    {
        hkVector4 zero;
        zero.setZero4();
        m_col0 = zero;
        m_col1 = zero;
        m_col2 = zero;
        m_col0(0) = 1.0f;
        m_col1(1) = 1.0f;
        m_col2(2) = 1.0f;
    }
    hkVector4 m_col0, m_col1, m_col2;
};
class hkRotation : public hkMatrix3 {};

class hkTransform {
public:
    HK_FORCE_INLINE void setIdentity()
    {
        m_rotation.setIdentity();
        m_translation.setZero4();
    }
    HK_FORCE_INLINE void setTranslation(const hkVector4 &t) { m_translation = t; }
    hkRotation m_rotation;
    hkVector4 m_translation;
};

class hkpSphereShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpSphereShape(hkReal radius);   // ??0hkpSphereShape@@QAA@M@Z
    hkUint32 m_pad16[3];
};

class hkpCollidable;
extern "C" hkpCollidable *fn_8253D7A8(hkpCollidable *self, const hkpShape *shape, const hkTransform *t, int type);

// hkpCollidable (0x50 bytes); its constructor is emitted out of line in a game object and keeps its fn_ name.
class hkpCollidable {
public:
    HK_FORCE_INLINE hkpCollidable(const hkpShape *shape, const hkTransform *t, int type = 0) { fn_8253D7A8(this, shape, t, type); }
    HK_FORCE_INLINE hkInt8 getType() const { return m_type; }
    HK_FORCE_INLINE void *getOwner() const { return (void *)((char *)this + m_ownerOffset); }

    const hkpShape *m_shape;        // +0x0
    hkpShapeKey m_shapeKey;         // +0x4
    const void *m_motion;           // +0x8
    const hkpCollidable *m_parent;  // +0xC
    hkInt8 m_ownerOffset;           // +0x10
    hkUint8 m_pad11[7];
    hkInt8 m_type;                  // +0x18
    hkUint8 m_rest[0x50 - 0x19];
};

class hkpRigidBody;
class hkpWorldObject {
public:
    enum BroadPhaseType { BROAD_PHASE_INVALID, BROAD_PHASE_ENTITY, BROAD_PHASE_PHANTOM, BROAD_PHASE_BORDER };
};

static HK_FORCE_INLINE hkpRigidBody *hkpGetRigidBody(const hkpCollidable *collidable)
{
    if (collidable->getType() == hkpWorldObject::BROAD_PHASE_ENTITY)
    {
        return (hkpRigidBody *)collidable->getOwner();
    }
    return HK_NULL;
}

struct hkContactPoint {
    HK_FORCE_INLINE const hkVector4 &getPosition() const { return m_position; }
    HK_FORCE_INLINE const hkVector4 &getSeparatingNormal() const { return m_separatingNormal; }
    HK_FORCE_INLINE void setDistance(hkReal d) { m_separatingNormal(3) = d; }
    hkVector4 m_position;
    hkVector4 m_separatingNormal;
};

struct hkpRootCdPoint {
    hkContactPoint m_contact;                // +0x0
    const hkpCollidable *m_rootCollidableA;  // +0x20
    hkpShapeKey m_shapeKeyA;                 // +0x24
    const hkpCollidable *m_rootCollidableB;  // +0x28
    hkpShapeKey m_shapeKeyB;                 // +0x2C
};

struct hkpCdPoint;

class hkpCdPointCollector {
public:
    HK_FORCE_INLINE hkpCdPointCollector() { reset(); }
    virtual ~hkpCdPointCollector() {}
    virtual void addCdPoint(const hkpCdPoint &point);
    virtual void reset() { m_earlyOutDistance = HK_REAL_MAX; }
    hkReal m_earlyOutDistance;
};

class hkpClosestCdPointCollector : public hkpCdPointCollector {
public:
    HK_FORCE_INLINE hkpClosestCdPointCollector() { reset(); }
    virtual void addCdPoint(const hkpCdPoint &point);
    virtual void reset()
    {
        m_hitPoint.m_rootCollidableA = HK_NULL;
        m_hitPoint.m_contact.setDistance(HK_REAL_MAX);
        hkpCdPointCollector::reset();
    }
    HK_FORCE_INLINE hkBool hasHit() const { return m_hitPoint.m_rootCollidableA != HK_NULL; }
    HK_FORCE_INLINE const hkpRootCdPoint &getHit() const { return m_hitPoint; }

    hkpRootCdPoint m_hitPoint;   // +0x10
};

struct hkpLinearCastInput {
    HK_FORCE_INLINE hkpLinearCastInput() : m_maxExtraPenetration(HK_REAL_EPSILON), m_startPointTolerance(HK_REAL_EPSILON) {}
    hkVector4 m_to;
    hkReal m_maxExtraPenetration;
    hkReal m_startPointTolerance;
};

class hkpWorld;
extern "C" void fn_82D820E0(hkpWorld *world, const hkpCollidable *collA, const hkpLinearCastInput &input,
                            hkpCdPointCollector &castCollector, hkpCdPointCollector *startCollector);   // hkpWorld::linearCast

struct CastOutput {
    hkVector4 m_position;     // +0x0
    hkVector4 m_normal;       // +0x10
    hkpShapeKey m_shapeKey;   // +0x20
    hkpRigidBody *m_body;     // +0x24
};

extern "C" int fn_82DF0890(hkpWorld *world, const hkVector4 &from, hkReal radius, const hkVector4 &to, CastOutput *out)
{
    hkpSphereShape *sphere = new hkpSphereShape(radius);
    hkTransform t;
    t.setIdentity();
    t.setTranslation(from);
    hkpCollidable collidable(sphere, &t);

    hkpClosestCdPointCollector collector;   // before the input (register choice of the two constants)
    hkpLinearCastInput input;
    input.m_to = to;
    fn_82D820E0(world, &collidable, input, collector, HK_NULL);
    sphere->removeReference();

    if (collector.hasHit())
    {
        const hkpRootCdPoint &hit = collector.getHit();
        out->m_position = hit.m_contact.getPosition();
        out->m_normal = hit.m_contact.getSeparatingNormal();
        out->m_body = hkpGetRigidBody(hit.m_rootCollidableB);
        out->m_shapeKey = hit.m_shapeKeyB;
        return 0;
    }
    out->m_body = HK_NULL;
    out->m_position = to;
    hkVector4 &n = out->m_normal;   // through a reference: the shape key store stays after it
    n.setXYZ_W(lbl_8323B1A0, n);
    out->m_shapeKey = hkpShapeKey(-1);
    return 1;
}
