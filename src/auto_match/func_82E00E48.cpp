// hkpVehicleLinearCastWheelCollide::clone(const hkpRigidBody &newChassis, const hkArray<hkpPhantom *> &newPhantoms)
// const (Physics/Vehicle/WheelCollide/LinearCast/hkpVehicleLinearCastWheelCollide.cpp), vtable slot 7. It keeps its
// fn_ name (no Matching unit refers to it; `self` is `this`). The default constructor is inlined.
// Class layouts as in func_82E00B20.cpp / func_82DF9E98.cpp.
#include "havok/hkBase.h"

// HK_REAL_EPSILON. The source used the literal (whose load the compiler schedules freely); the game's copy of
// that constant is lbl_82057518, and a static constant with that name gives the same code (a plain extern is
// reloaded after each store, a selectany definition schedules its address differently).
static const float lbl_82057518 = 1.1920928955078125e-07f;

class hkpCollidable;
class hkpCollidableAddedEvent;
class hkpCollidableRemovedEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpPhantomOverlapListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void collidableAddedCallback(const hkpCollidableAddedEvent &event) = 0;
    virtual void collidableRemovedCallback(const hkpCollidableRemovedEvent &event) = 0;
    virtual ~hkpPhantomOverlapListener() {}
};

// Physics/Vehicle/WheelCollide/RejectRayChassisListener/hkpRejectChassisListener.h.
class hkpRejectChassisListener : public hkReferencedObject, public hkpPhantomOverlapListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpRejectChassisListener() {}
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

class hkpShape : public hkReferencedObject {
};
class hkpWorld;
class hkpVehicleInstance;

// Only getCollidable(): hkpWorldObject's m_collidable is at +0x10.
class hkpRigidBody : public hkReferencedObject {
public:
    const hkpCollidable *getCollidable() const { return reinterpret_cast<const hkpCollidable *>(&m_collidable); }

    hkpWorld *m_world;      // +0x8
    hkUlong m_userData;     // +0xC
    char m_collidable[4];   // +0x10 (hkpLinkedCollidable)
};

extern "C" {
void fn_82D9A420(class hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::removePhantomOverlapListener
void fn_82D9A5F8(class hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::addPhantomOverlapListener
void fn_82CE6310(hkMemoryAllocator *alloc, void *array, int reqElems, int elemSize);   // hkArrayUtil::_reserve
}

class hkpPhantom : public hkReferencedObject {
public:
    void removePhantomOverlapListener(hkpPhantomOverlapListener *listener) { fn_82D9A420(this, listener); }
    void addPhantomOverlapListener(hkpPhantomOverlapListener *listener) { fn_82D9A5F8(this, listener); }
};

class hkpAabbPhantom : public hkpPhantom {
};

// hkArray<T>::setSize for POD elements (hkArrayBase::_setSize with the heap allocator): grow to
// max(2 * capacity, n) through hkArrayUtil::_reserve, then set the size.
template <typename T>
class hkArrayWithSetSize : public hkArray<T> {
public:
    HK_FORCE_INLINE void setSize(int n)
    {
        hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(this);
        const int cap = this->getCapacity();
        if (cap < n) {
            int cap2 = 2 * cap;
            int newSize = (n < cap2) ? cap2 : n;
            fn_82CE6310(&alloc, this, newSize, sizeof(T));
        }
        this->m_size = n;
    }
};

// Physics/Vehicle/WheelCollide/hkpVehicleWheelCollide.h.
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
    virtual void init(const hkpVehicleInstance *vehicle);                                                // +0x0C
    virtual void getPhantoms(hkArray<hkpPhantom *> &phantomsOut);                                        // +0x10
    virtual void addToWorld(hkpWorld *world);                                                            // +0x14
    virtual void removeFromWorld();                                                                      // +0x18
    virtual hkpVehicleWheelCollide *clone(const hkpRigidBody &newChassis,
                                          const hkArray<hkpPhantom *> &newPhantoms) const;               // +0x1C

    hkBool m_alreadyUsed;   // +0x8
    hkUint8 m_type;         // +0x9 (hkEnum<WheelCollideType, hkUint8>)
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
    HK_FORCE_INLINE hkpVehicleLinearCastWheelCollide()
    {
        m_maxExtraPenetration = lbl_82057518;
        m_startPointTolerance = lbl_82057518;
        m_alreadyUsed = false;
        m_type = LINEAR_CAST_WHEEL_COLLIDE;
    }
    virtual ~hkpVehicleLinearCastWheelCollide();
    virtual hkpVehicleWheelCollide *clone(const hkpRigidBody &newChassis, const hkArray<hkpPhantom *> &newPhantoms) const;

    hkUint32 m_wheelCollisionFilterInfo;                // +0xC
    hkArrayWithSetSize<WheelState> m_wheelStates;       // +0x10
    hkpRejectChassisListener m_rejectChassisListener;   // +0x1C
    hkReal m_maxExtraPenetration;                       // +0x2C
    hkReal m_startPointTolerance;                       // +0x30
};

// The old elements are read through a reference to the old array: reading self->m_wheelStates[i]
// directly puts the shared element offset last in the new element's add (add r28, r9, r11; the
// original has add r28, r11, r9).
extern "C" hkpVehicleWheelCollide *fn_82E00E48(const hkpVehicleLinearCastWheelCollide *self, const hkpRigidBody &newChassis,
                                               const hkArray<hkpPhantom *> &newPhantoms)
{
    typedef hkpVehicleLinearCastWheelCollide::WheelState WheelState;
    hkpVehicleLinearCastWheelCollide *newC = new hkpVehicleLinearCastWheelCollide;
    const int numWheels = self->m_wheelStates.getSize();
    newC->m_wheelStates.setSize(numWheels);
    const hkArray<WheelState> &oldStates = self->m_wheelStates;
    hkArray<WheelState> &newStates = newC->m_wheelStates;
    for (hkUint8 i = 0; i < numWheels; ++i) {
        const WheelState &oldState = oldStates[i];
        WheelState &newState = newStates[i];
        newState.m_shape = oldState.m_shape;
        newState.m_shape->addReference();
        hkpAabbPhantom *phantom = (hkpAabbPhantom *)newPhantoms[i];
        newState.m_phantom = phantom;
        phantom->addReference();
        phantom->removePhantomOverlapListener(const_cast<hkpRejectChassisListener *>(&self->m_rejectChassisListener));
        phantom->addPhantomOverlapListener(&newC->m_rejectChassisListener);
        newC->m_rejectChassisListener.m_chassis = newChassis.getCollidable();
    }
    newC->m_wheelCollisionFilterInfo = self->m_wheelCollisionFilterInfo;
    newC->m_maxExtraPenetration = self->m_maxExtraPenetration;
    newC->m_startPointTolerance = self->m_startPointTolerance;
    return newC;
}
