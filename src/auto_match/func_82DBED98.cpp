// Closest-point query of a tiny sphere (radius 0.01) at `position` against `shape` (identity
// transform) through the world's collision dispatcher, with a copy of the world's collision
// input (tolerance HK_REAL_MAX / 2, a null collision filter); returns the hit's shape key B,
// or 0 if nothing was hit. Havok code: /O2 /QVMXReserve (flag file); keeps its fn_ name.
//
// The 1.0f of hkMatrix3::setIdentity and HK_REAL_MAX are literals in the original, whose loads
// the scheduler is free to move. The game's copy of HK_REAL_MAX is __real@7f7fffee, which Matching C
// units reference, so it is declared here as a known constant (selectany).
#include "havok/hkpCollisionDispatcher.h"
#include "havok/hkpSphereShape.h"
#include "havok/hkpClosestCdPointCollector.h"
#include "havok/hkpNullCollisionFilter.h"

extern "C" const float lbl_82138458;   // HK_REAL_MAX / 2

extern "C" hkTransform lbl_8323B1D0;   // hkTransform::getIdentity()

class hkpWorld {
public:
    HK_FORCE_INLINE hkpCollisionDispatcher *getCollisionDispatcher() const { return m_collisionDispatcher; }
    HK_FORCE_INLINE const hkpCollisionInput *getCollisionInput() const { return m_collisionInput; }
    char m_pad[0x78];
    hkpCollisionInput *m_collisionInput;            // +0x78
    char m_pad7c[4];
    hkpCollisionDispatcher *m_collisionDispatcher;  // +0x80
};

extern "C" hkpShapeKey fn_82DBED98(hkpWorld *world, const hkpShape *shape, const hkVector4 &position)
{
    hkpSphereShape sphere(0.01f);
    hkTransform transform;
    transform.getRotation().setIdentity();
    transform.setTranslation(position);
    hkpCdBody bodyA(&sphere, &transform);
    hkpCdBody bodyB(shape, &lbl_8323B1D0);
    hkpClosestCdPointCollector collector;
    hkpCollisionDispatcher::GetClosestPointsFunc func =
        world->getCollisionDispatcher()->getGetClosestPointsFunc(sphere.getType(), shape->getType());
    hkpCollisionInput input = *world->getCollisionInput();
    input.m_tolerance = lbl_82138458;
    hkpNullCollisionFilter filter;
    input.m_filter = &filter;
    func(bodyA, bodyB, input, collector);
    if (collector.hasHit())
        return collector.getHit().m_shapeKeyB;
    return 0;
}
