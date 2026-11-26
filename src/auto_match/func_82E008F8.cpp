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
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpLinearCastInput.h"
#include "havok/hkpVehicleWheelCollide.h"

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
