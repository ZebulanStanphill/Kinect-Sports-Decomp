// The wheel collision components of a vehicle
// (Physics/Vehicle/WheelCollide/hkpVehicleWheelCollide.h,
// RayCast/hkpVehicleRayCastWheelCollide.h,
// LinearCast/hkpVehicleLinearCastWheelCollide.h and
// RejectChassisListener/hkpRejectChassisListener.h).
#ifndef HAVOK_HKPVEHICLEWHEELCOLLIDE_H
#define HAVOK_HKPVEHICLEWHEELCOLLIDE_H

#include "havok/hkTransform.h"
#include "havok/hkpPhantomOverlapListener.h"

class hkpAabbPhantom;
class hkpCollidable;
class hkpPhantom;
class hkpRigidBody;
class hkpShape;
class hkpVehicleInstance;
class hkpWorld;

// 0x10 bytes: keeps a wheel's phantom from reporting the chassis.
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

// 0xC bytes. Its vtable (??_7hkpVehicleWheelCollide@@6B@) has 12 slots: the deleting destructor (the
// folded trivial one), hkReferencedObject's two, eight pure functions (clone is slot 7) and one empty
// one. Only the first five of its own are declared here; the four pure ones after clone are not
// identified.
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

// 0x24 bytes
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

// 0x34 bytes
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

#endif
