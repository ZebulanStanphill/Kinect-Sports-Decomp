// hkpVehicleLinearCastWheelCollide::castSingleWheel (slot 16 of its vtable; keeps its fn_ name,
// nothing else refers to it): a linear cast of the wheel's shape from its transform to m_to through
// the wheel's phantom (hkpAabbPhantom::linearCast, fn_82D8D1D8) with an hkpClosestCdPointCollector;
// the hit is copied out and the hkBool result is returned through the hidden pointer in r3.
// hkpCollidable's constructor is out of line in the game (fn_8253D7A8).
//
// The original uses the literals HK_REAL_EPSILON and HK_REAL_MAX, whose loads the scheduler is free
// to move; the game's copies are __real@34000000 and __real@7f7fffee, which Matching C units reference, so
// they are declared here as known constants (as in func_83096D00.cpp). Built with /QVMXReserve
// (the vector copies use v0/v13).
#include "havok/hkpCdPointCollector.h"
#include "havok/hkContactPoint.h"
#include "havok/hkpVehicleWheelCollide.h"

extern "C" hkpCollidable *fn_8253D7A8(hkpCollidable *self, const hkpShape *shape, const void *ms, int type);

class hkpCollidable {
public:
    HK_FORCE_INLINE hkpCollidable(const hkpShape *shape, const hkTransform *t, int type = 0) { fn_8253D7A8(this, shape, t, type); }
    HK_FORCE_INLINE void setCollisionFilterInfo(hkUint32 info) { m_collisionFilterInfo = info; }
    char m_pad0[0x1c];
    hkUint32 m_collisionFilterInfo;
    char m_pad1[0x50 - 0x20];
};

class hkpRootCdPoint {
public:
    hkContactPoint m_contact;
    const hkpCollidable *m_rootCollidableA;
    hkUint32 m_shapeKeyA;
    const hkpCollidable *m_rootCollidableB;
    hkUint32 m_shapeKeyB;
};

class hkpClosestCdPointCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpClosestCdPointCollector);
    HK_FORCE_INLINE hkpClosestCdPointCollector() { reset(); }
    virtual void addCdPoint(const hkpCdPoint &point);
    HK_FORCE_INLINE virtual void reset()
    {
        m_hitPoint.m_rootCollidableA = HK_NULL;
        m_hitPoint.m_contact.setDistance(3.40282e+38f);
        hkpCdPointCollector::reset();
    }
    HK_FORCE_INLINE bool hasHit() const { return m_hitPoint.m_rootCollidableA != HK_NULL; }
    HK_FORCE_INLINE const hkpRootCdPoint &getHit() const { return m_hitPoint; }
    hkpRootCdPoint m_hitPoint;
};

struct hkpLinearCastInput {
    HK_FORCE_INLINE hkpLinearCastInput() : m_maxExtraPenetration(1.1920929e-07f), m_startPointTolerance(1.1920929e-07f) {}
    hkVector4 m_to;
    hkReal m_maxExtraPenetration;
    hkReal m_startPointTolerance;
};

extern "C" void fn_82D8D1D8(const hkpAabbPhantom *self, const hkpCollidable *collA, const hkpLinearCastInput &input, hkpCdPointCollector &castCollector, hkpCdPointCollector *startCollector);
class hkpAabbPhantom {
public:
    HK_FORCE_INLINE void linearCast(const hkpCollidable *collA, const hkpLinearCastInput &input, hkpCdPointCollector &castCollector, hkpCdPointCollector *startCollector) const
    { fn_82D8D1D8(this, collA, input, castCollector, startCollector); }
};

extern "C" hkBool *fn_82E008F8(hkBool *result, const hkpVehicleLinearCastWheelCollide *self, const hkpVehicleInstance *vehicle, hkUint8 wheelNum, hkpRootCdPoint &linearCastOutput)
{
    const hkpVehicleLinearCastWheelCollide::WheelState &wheelState = self->m_wheelStates[wheelNum];
    hkpCollidable collidable(wheelState.m_shape, &wheelState.m_transform);
    collidable.setCollisionFilterInfo(self->m_wheelCollisionFilterInfo);
    hkpLinearCastInput linearCastInput;
    {
        linearCastInput.m_to = wheelState.m_to;
        linearCastInput.m_maxExtraPenetration = self->m_maxExtraPenetration;
        linearCastInput.m_startPointTolerance = self->m_startPointTolerance;
    }
    hkpClosestCdPointCollector castCollector;
    wheelState.m_phantom->linearCast(&collidable, linearCastInput, castCollector, HK_NULL);
    if (castCollector.hasHit()) {
        linearCastOutput = castCollector.getHit();
        *result = true;
    } else {
        *result = false;
    }
    return result;
}
