// hkpVehicleLinearCastWheelCollide::castSingleWheel (slot 16 of its vtable; keeps its fn_ name,
// nothing else refers to it): a linear cast of the wheel's shape from its transform to m_to through
// the wheel's phantom (hkpAabbPhantom::linearCast, fn_82D8D1D8) with an hkpClosestCdPointCollector;
// the hit is copied out and the hkBool result is returned through the hidden pointer in r3.
// hkpCollidable's constructor is out of line in the game (fn_8253D7A8).
//
// The original uses the literals HK_REAL_EPSILON and HK_REAL_MAX, whose loads the scheduler is free
// to move; the game's copies are lbl_82057518 and lbl_82134508, which Matching C units reference, so
// they are declared here as known constants (as in func_83096D00.cpp). Built with /QVMXReserve
// (the vector copies use v0/v13).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setW(hkReal w) { m_quad.vector4_f32[3] = w; }
    hkQuadReal m_quad;
};
class hkTransform { public: hkVector4 m_rotation[3]; hkVector4 m_translation; };

extern "C" __declspec(selectany) const hkReal lbl_82057518 = 1.192092896e-07f;   // HK_REAL_EPSILON
extern "C" __declspec(selectany) const hkReal lbl_82134508 = 3.40282e+38f;   // HK_REAL_MAX

class hkpShape;
class hkpCollidable;
class hkpCdPoint;
class hkpVehicleInstance;

extern "C" hkpCollidable *fn_8253D7A8(hkpCollidable *self, const hkpShape *shape, const void *ms, int type);

class hkpCollidable {
public:
    HK_FORCE_INLINE hkpCollidable(const hkpShape *shape, const hkTransform *t, int type = 0) { fn_8253D7A8(this, shape, t, type); }
    HK_FORCE_INLINE void setCollisionFilterInfo(hkUint32 info) { m_collisionFilterInfo = info; }
    char m_pad0[0x1c];
    hkUint32 m_collisionFilterInfo;
    char m_pad1[0x50 - 0x20];
};

class hkContactPoint {
public:
    HK_FORCE_INLINE void setDistance(hkReal d) { m_separatingNormal.setW(d); }
    hkVector4 m_position;
    hkVector4 m_separatingNormal;
};

class hkpRootCdPoint {
public:
    hkContactPoint m_contact;
    const hkpCollidable *m_rootCollidableA;
    hkUint32 m_shapeKeyA;
    const hkpCollidable *m_rootCollidableB;
    hkUint32 m_shapeKeyB;
};

class hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpCdPointCollector);
    HK_FORCE_INLINE hkpCdPointCollector() { m_earlyOutDistance = lbl_82134508; }
    virtual ~hkpCdPointCollector() {}
    virtual void addCdPoint(const hkpCdPoint &point) = 0;
    virtual void reset() { m_earlyOutDistance = lbl_82134508; }
    hkReal m_earlyOutDistance;
};

class hkpClosestCdPointCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpClosestCdPointCollector);
    HK_FORCE_INLINE hkpClosestCdPointCollector() { reset(); }
    virtual void addCdPoint(const hkpCdPoint &point);
    HK_FORCE_INLINE virtual void reset()
    {
        m_hitPoint.m_rootCollidableA = HK_NULL;
        m_hitPoint.m_contact.setDistance(lbl_82134508);
        hkpCdPointCollector::reset();
    }
    HK_FORCE_INLINE bool hasHit() const { return m_hitPoint.m_rootCollidableA != HK_NULL; }
    HK_FORCE_INLINE const hkpRootCdPoint &getHit() const { return m_hitPoint; }
    hkpRootCdPoint m_hitPoint;
};

struct hkpLinearCastInput {
    HK_FORCE_INLINE hkpLinearCastInput() : m_maxExtraPenetration(lbl_82057518), m_startPointTolerance(lbl_82057518) {}
    hkVector4 m_to;
    hkReal m_maxExtraPenetration;
    hkReal m_startPointTolerance;
};

class hkpAabbPhantom;
extern "C" void fn_82D8D1D8(const hkpAabbPhantom *self, const hkpCollidable *collA, const hkpLinearCastInput &input, hkpCdPointCollector &castCollector, hkpCdPointCollector *startCollector);
class hkpAabbPhantom {
public:
    HK_FORCE_INLINE void linearCast(const hkpCollidable *collA, const hkpLinearCastInput &input, hkpCdPointCollector &castCollector, hkpCdPointCollector *startCollector) const
    { fn_82D8D1D8(this, collA, input, castCollector, startCollector); }
};

struct WheelState {
    hkpAabbPhantom *m_phantom;
    const hkpShape *m_shape;
    hkTransform m_transform;
    hkVector4 m_to;
};

class hkpVehicleLinearCastWheelCollide {
public:
    char m_base[0xc];
    hkUint32 m_wheelCollisionFilterInfo;   // +0xc
    hkArray<WheelState> m_wheelStates;     // +0x10
    char m_pad[0x2c - 0x1c];
    hkReal m_maxExtraPenetration;          // +0x2c
    hkReal m_startPointTolerance;          // +0x30
};

extern "C" hkBool *fn_82E008F8(hkBool *result, const hkpVehicleLinearCastWheelCollide *self, const hkpVehicleInstance *vehicle, hkUint8 wheelNum, hkpRootCdPoint &linearCastOutput)
{
    const WheelState &wheelState = self->m_wheelStates[wheelNum];
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
