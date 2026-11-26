// The wheel collision components of a vehicle
// (Physics/Vehicle/WheelCollide/hkpVehicleWheelCollide.h,
// RayCast/hkpVehicleRayCastWheelCollide.h,
// LinearCast/hkpVehicleLinearCastWheelCollide.h and
// RejectChassisListener/hkpRejectChassisListener.h).
#ifndef HAVOK_HKPVEHICLEWHEELCOLLIDE_H
#define HAVOK_HKPVEHICLEWHEELCOLLIDE_H

#include "havok/hkTransform.h"
#include "havok/hkpPhantomOverlapListener.h"

class hkAabb;
class hkpAabbPhantom;
class hkpCollidable;
class hkpCollisionFilter;
class hkpPhantom;
class hkpRigidBody;
class hkpShape;
class hkpVehicleInstance;
class hkpWorld;
struct hkpShapeRayCastCommand;
struct hkpWorldRayCastOutput;

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
// one. What each slot is follows from hkpVehicleRayCastWheelCollide's functions:
//   +0xC  82E01810 computes the wheels' box and creates the phantom: init.
//   +0x10 82E01A60 (float, vehicle, output array of 0x60-byte elements) casts every wheel and fills the
//         outputs, calling +0x2C for each wheel: collideWheels.
//   +0x14 82E01F38 appends m_phantom to the array it is given: getPhantoms.
//   +0x18 82E016D8 moves the phantom to the wheels' box: updateBeforeCollisionDetection.
//   +0x1C clone.
//   +0x20 82E01778 adds m_phantom to the world it is given (hkpWorld::addPhantom): addToWorld.
//   +0x24 82E01788 removes m_phantom from its world: removeFromWorld.
//   +0x28 82E01798 stores its argument in m_wheelCollisionFilterInfo and in the phantom's collidable:
//         setCollisionFilterInfo.
//   +0x2C the empty function 82BA02A8, also in the base's vtable: wheelCollideCallback (inline).
// The names and parameter lists follow Havok's header; the order is the game's. Pure in the game; plain
// here so that a unit can construct a subclass without declaring them.
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
    // 0x60 bytes for each wheel (82E01A60 steps through the array by that), 16-byte aligned (82E01D98
    // stores vectors at +0x0 and +0x10); the members are not identified.
    struct __declspec(align(16)) CollisionDetectionWheelOutput {
        hkUint8 m_data[0x60];
    };

    virtual void init(const hkpVehicleInstance *vehicle);                                                // +0x0C
    virtual void collideWheels(const hkReal deltaTime, const hkpVehicleInstance *vehicle,
                               CollisionDetectionWheelOutput *cdInfoOut);                                // +0x10
    virtual void getPhantoms(hkArray<hkpPhantom *> &phantomsOut);                                        // +0x14
    virtual void updateBeforeCollisionDetection(const hkpVehicleInstance *vehicle);                      // +0x18
    virtual hkpVehicleWheelCollide *clone(const hkpRigidBody &newChassis,
                                          const hkArray<hkpPhantom *> &newPhantoms) const;               // +0x1C
    virtual void addToWorld(hkpWorld *world);                                                            // +0x20
    virtual void removeFromWorld();                                                                      // +0x24
    virtual void setCollisionFilterInfo(hkUint32 filterInfo);                                            // +0x28
    virtual void wheelCollideCallback(const hkpVehicleInstance *vehicle, hkUint8 wheelIndex,
                                      CollisionDetectionWheelOutput &cdInfo) {}                          // +0x2C

    hkBool m_alreadyUsed;   // +0x8
    hkUint8 m_type;         // +0x9 (hkEnum<WheelCollideType, hkUint8>)
};

// 0x24 bytes. Its vtable (??_7hkpVehicleRayCastWheelCollide@@6B@, 17 slots) adds five functions:
//   +0x30 82E01E28 fills one ray cast command per wheel (from, to, the filter info) with its output and
//         returns their number, or 0 when the phantom overlaps nothing: Havok's buildRayCastCommands (the
//         parameter list is Havok's and is not checked beyond the six registers used).
//   +0x34 82E019A8 takes the min and max over the wheels: calcWheelsAABB (82E01810 and 82E016D8 call it).
//   +0x38 82E01720 casts one wheel's ray through the phantom: castSingleWheel.
//   +0x3C 82E01B78 and +0x40 82E01D98 are called by collideWheels with (vehicle, wheel index, ray output,
//         wheel output) for a hit and (vehicle, wheel index, wheel output) otherwise:
//         getCollisionOutputFromCastResult and getCollisionOutputWithoutHit.
// The names follow Havok's header.
class hkpVehicleRayCastWheelCollide : public hkpVehicleWheelCollide {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleRayCastWheelCollide();
    hkpVehicleRayCastWheelCollide(hkFinishLoadedObjectFlag f);
    virtual ~hkpVehicleRayCastWheelCollide();
    virtual hkpVehicleWheelCollide *clone(const hkpRigidBody &newChassis, const hkArray<hkpPhantom *> &newPhantoms) const;
    virtual int buildRayCastCommands(const hkpVehicleInstance *vehicle, const hkpCollisionFilter *collisionFilter,
                                     hkUint32 filterInfo, hkpShapeRayCastCommand *commandStorage,
                                     hkpWorldRayCastOutput *outputStorage) const;                        // +0x30
    virtual void calcWheelsAABB(const hkpVehicleInstance *vehicle, hkAabb &aabbOut) const;               // +0x34
    // Havok's first parameter is `const hkpVehicleInstance::WheelInfo &`, which cannot be named here (the
    // class is only forward declared in this header).
    virtual void castSingleWheel(const void *wheelInfo, hkpWorldRayCastOutput &output) const;            // +0x38
    virtual void getCollisionOutputFromCastResult(const hkpVehicleInstance *vehicle, hkUint8 wheelNum,
                                                  const hkpWorldRayCastOutput &raycastOutput,
                                                  CollisionDetectionWheelOutput &output) const;          // +0x3C
    virtual void getCollisionOutputWithoutHit(const hkpVehicleInstance *vehicle, hkUint8 wheelNum,
                                              CollisionDetectionWheelOutput &cdInfo) const;              // +0x40

    hkUint32 m_wheelCollisionFilterInfo;                 // +0xC
    hkpAabbPhantom *m_phantom;                           // +0x10
    hkpRejectChassisListener m_rejectRayChassisListener; // +0x14
};

// 0x34 bytes. Its vtable (19 slots) adds seven functions of its own after the base's (+0x30 to +0x48:
// 82E000D0, 82E00130, 82E00188, 82DFFEF8, 82E008F8, 82E002F8, 82E004A0); they are not identified and not
// declared.
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
