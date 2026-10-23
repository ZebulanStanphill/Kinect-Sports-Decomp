// hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide(hkFinishLoadedObjectFlag), out of line. The finish
// function fn_82DFA040, a Matching C unit, calls it by its fn_ name, so it keeps that name and runs the constructor
// with MSVC's explicit constructor call (a placement new would add a null check).
#include "havok/hkBase.h"

class hkpCollidable;
class hkpCollidableAddedEvent;
class hkpCollidableRemovedEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

// Interface with no base (RTTI); vtable: the two callbacks (pure), then the deleting destructor (fn_82D8D9F0).
class hkpPhantomOverlapListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void collidableAddedCallback(const hkpCollidableAddedEvent &event) = 0;
    virtual void collidableRemovedCallback(const hkpCollidableRemovedEvent &event) = 0;
    virtual ~hkpPhantomOverlapListener() {}
};

// Physics/Vehicle/WheelCollide/RejectRayChassisListener/hkpRejectChassisListener.h.
// RTTI: hkReferencedObject at +0x0, hkpPhantomOverlapListener at +0x8.
class hkpRejectChassisListener : public hkReferencedObject, public hkpPhantomOverlapListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpRejectChassisListener() {}
    hkpRejectChassisListener(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual ~hkpRejectChassisListener();
    virtual void collidableAddedCallback(const hkpCollidableAddedEvent &event);
    virtual void collidableRemovedCallback(const hkpCollidableRemovedEvent &event);

    const hkpCollidable *m_chassis;   // +0xC
};

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class __declspec(align(16)) hkTransform {
public:
    hkVector4 m_rotation[3];
    hkVector4 m_translation;
};

class hkpRigidBody;
class hkpPhantom;
class hkpAabbPhantom;
class hkpShape;
class hkpWorld;
class hkpVehicleInstance;

// Physics/Vehicle/WheelCollide/hkpVehicleWheelCollide.h. Vtable (12 slots): the deleting destructor (the folded
// trivial one, fn_82D3B298), hkReferencedObject's two, eight pure functions (clone is slot 7), and one empty one.
class hkpVehicleWheelCollide : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    enum WheelCollideType {
        INVALID_WHEEL_COLLIDE,
        RAY_CAST_WHEEL_COLLIDE,
        LINEAR_CAST_WHEEL_COLLIDE,
        USER_WHEEL_COLLIDE1
    };
    hkpVehicleWheelCollide() : m_alreadyUsed(false) {}
    hkpVehicleWheelCollide(hkFinishLoadedObjectFlag f) : hkReferencedObject(f)
    {
        if (f.m_finishing)
            m_type = INVALID_WHEEL_COLLIDE;
    }
    virtual void init(const hkpVehicleInstance *vehicle);                                                // +0x0C
    virtual void getPhantoms(hkArray<hkpPhantom *> &phantomsOut);                                        // +0x10
    virtual void addToWorld(hkpWorld *world);                                                            // +0x14
    virtual void removeFromWorld();                                                                      // +0x18
    virtual hkpVehicleWheelCollide *clone(const hkpRigidBody &newChassis,
                                          const hkArray<hkpPhantom *> &newPhantoms) const;               // +0x1C

    hkBool m_alreadyUsed;   // +0x8
    hkUint8 m_type;         // +0x9 (hkEnum<WheelCollideType, hkUint8>)
};

extern "C" {
void fn_82D9A420(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::removePhantomOverlapListener
void fn_82D9A5F8(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::addPhantomOverlapListener
}

// Only what the wheel-collide code touches.
class hkpPhantom : public hkReferencedObject {
public:
    void removePhantomOverlapListener(hkpPhantomOverlapListener *listener) { fn_82D9A420(this, listener); }
    void addPhantomOverlapListener(hkpPhantomOverlapListener *listener) { fn_82D9A5F8(this, listener); }
};

class hkpAabbPhantom : public hkpPhantom {
};

// Physics/Vehicle/WheelCollide/RayCast/hkpVehicleRayCastWheelCollide.h.
class hkpVehicleRayCastWheelCollide : public hkpVehicleWheelCollide {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleRayCastWheelCollide();
    hkpVehicleRayCastWheelCollide(hkFinishLoadedObjectFlag f);
    virtual ~hkpVehicleRayCastWheelCollide();
    virtual hkpVehicleWheelCollide *clone(const hkpRigidBody &newChassis, const hkArray<hkpPhantom *> &newPhantoms) const;

    hkUint32 m_wheelCollisionFilterInfo;                 // +0xC
    hkpAabbPhantom *m_phantom;                           // +0x10
    hkpRejectChassisListener m_rejectRayChassisListener; // +0x14
};

// Physics/Vehicle/WheelCollide/LinearCast/hkpVehicleLinearCastWheelCollide.h.
class hkpVehicleLinearCastWheelCollide : public hkpVehicleWheelCollide {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    struct WheelState {
        hkpAabbPhantom *m_phantom;   // +0x0
        const hkpShape *m_shape;     // +0x4
        hkTransform m_transform;     // +0x10
        hkVector4 m_to;              // +0x50
    };
    hkpVehicleLinearCastWheelCollide();
    hkpVehicleLinearCastWheelCollide(hkFinishLoadedObjectFlag f);
    virtual ~hkpVehicleLinearCastWheelCollide();
    virtual hkpVehicleWheelCollide *clone(const hkpRigidBody &newChassis, const hkArray<hkpPhantom *> &newPhantoms) const;

    hkUint32 m_wheelCollisionFilterInfo;              // +0xC
    hkArray<WheelState> m_wheelStates;                // +0x10
    hkpRejectChassisListener m_rejectChassisListener; // +0x1C
    hkReal m_maxExtraPenetration;                     // +0x2C
    hkReal m_startPointTolerance;                     // +0x30
};

HK_FORCE_INLINE hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide(hkFinishLoadedObjectFlag f)
    : hkpVehicleWheelCollide(f), m_rejectRayChassisListener(f)
{
    if (f.m_finishing)
        m_type = RAY_CAST_WHEEL_COLLIDE;
}

extern "C" hkpVehicleRayCastWheelCollide *fn_82DFA070(hkpVehicleRayCastWheelCollide *self, hkFinishLoadedObjectFlag f)
{
    self->hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide(f);
    return self;
}
