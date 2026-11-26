// Casts a sphere of the given radius from `from` to `to` through the world (hkpWorld::linearCast,
// fn_82D820E0) with a closest-point collector, and reports the closest hit (position, normal, body
// and shape key) or, without a hit, the end point. Returns 1 when nothing was hit. Keeps its fn_ name.
// Havok code: /O2 /QVMXReserve (flag file).
//
// HK_REAL_MAX, HK_REAL_EPSILON and 1.0f are literals: the configured lbl_ floats are defined
// (selectany) and used once in linearCastSphere_bindConstants first, so that the compiler
// materializes the literals from them (one load per value, scheduled like a literal).
#include "havok/hkpLinearCastInput.h"
#include "havok/hkpWorldObject.h"
#include "havok/hkpSphereShape.h"
#include "havok/hkpClosestCdPointCollector.h"

extern "C" {
extern hkVector4 lbl_8323B1A0;   // the zero vector (hkVector4::getZero())
}

// Makes the configured names the compiler's constant-pool entries for these values (see above).
void linearCastSphere_bindConstants(float *out)
{
    out[0] = 1.0f;
    out[1] = 3.40282e+38f;
    out[2] = 1.1920929e-07f;
}

#define HK_REAL_MAX 3.40282e+38f
#define HK_REAL_EPSILON 1.192092896e-07f

class hkpRigidBody;

static HK_FORCE_INLINE hkpRigidBody *hkpGetRigidBody(const hkpCollidable *collidable)
{
    if (collidable->getType() == hkpWorldObject::BROAD_PHASE_ENTITY)
    {
        return (hkpRigidBody *)collidable->getOwner();
    }
    return HK_NULL;
}

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
