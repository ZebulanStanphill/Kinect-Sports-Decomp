// hkpBreakOffPartsUtil::LimitContactImpulseUtil::LimitContactImpulseUtil(hkpBreakOffPartsUtil *, hkpEntity *)
// (hkpBreakOffPartsUtil.cpp).
#include "havok/hkBase.h"
class hkpEntity;
struct hkpContactPointEvent;
struct hkpCollisionEvent;
class hkpContactPointAddedEvent;
class hkpContactPointRemovedEvent;
class hkpContactProcessEvent;
class hkpContactPointConfirmedEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

// hkpContactListener (Physics/Dynamics/Collide/ContactListener/hkpContactListener.h): an interface with no base.
// Vtable (7 slots): three callbacks, the deleting destructor (slot 3, fn_8240DF10), three deprecated callbacks;
// the defaults are empty (fn_82BA02A8).
class hkpContactListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void contactPointCallback(const hkpContactPointEvent &event) {}
    virtual void collisionAddedCallback(const hkpCollisionEvent &event) {}
    virtual void collisionRemovedCallback(const hkpCollisionEvent &event) {}
    virtual ~hkpContactListener() {}
    virtual void contactPointAddedCallback(hkpContactPointAddedEvent &event) {}
    virtual void contactPointRemovedCallback(hkpContactPointRemovedEvent &event) {}
    virtual void contactProcessCallback(hkpContactProcessEvent &event) {}
};

// hkpCollisionListener (8 slots): overrides contactPointCallback (fn_82D95350) and adds
// contactPointConfirmedCallback.
class hkpCollisionListener : public hkpContactListener {
public:
    virtual void contactPointCallback(const hkpContactPointEvent &event);
    virtual ~hkpCollisionListener() {}
    virtual void contactPointConfirmedCallback(hkpContactPointConfirmedEvent &event) {}
};

extern "C" void fn_82CEAB00(void *map, hkMemoryAllocator *alloc, int numElements);   // hkMapBase<hkUlong, hkUlong>::reserve
extern "C" void fn_82D8A058(hkpEntity *entity, hkpContactListener *cl);              // hkpEntity::addContactListener
extern "C" const float lbl_82134508;                                                  // HK_REAL_MAX

// Only what LimitContactImpulseUtil touches.
class hkpEntity {
public:
    void addContactListener(hkpContactListener *cl) { fn_82D8A058(this, cl); }

    char m_pad0[0x98];
    void *m_limitContactImpulseUtilAndFlag;   // +0x98
};

// hkPointerMap whose constructor reserves room (hkMapBase::reserve with the heap allocator).
template <typename KEY, typename VAL>
class hkReservedPointerMap {
public:
    HK_FORCE_INLINE hkReservedPointerMap(int nelem = 0) : m_elem(HK_NULL), m_numElems(0), m_hashMod(-1)
    {
        fn_82CEAB00(this, &hkContainerHeapAllocator::get(this), nelem);
    }
    HK_FORCE_INLINE ~hkReservedPointerMap()
    {
        fn_82CEA4B8(this, &hkContainerHeapAllocator::get(this));
        fn_82BA02A8(this);
    }

    void *m_elem;
    int m_numElems;
    int m_hashMod;
};

struct hkUFloat8 {
    hkUint8 m_value;
};

typedef hkUint32 hkpShapeKey;

// Physics/Utilities/Destruction/BreakOffParts/hkpBreakOffPartsUtil.h. RTTI of the nested class:
// hkReferencedObject at +0x0, hkpCollisionListener (and hkpContactListener) at +0x8.
class hkpBreakOffPartsUtil {
public:
    class LimitContactImpulseUtil : public hkReferencedObject, public hkpCollisionListener {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
        LimitContactImpulseUtil(hkpBreakOffPartsUtil *breakUtil, hkpEntity *entity);
        virtual void contactPointAddedCallback(hkpContactPointAddedEvent &event);

        void *m_unknownC;                                         // +0xC, not set by the constructor
        hkpEntity *m_entity;                                      // +0x10
        hkUFloat8 m_maxImpulse;                                   // +0x14
        hkReal m_maxImpulseFactor;                                // +0x18
        hkReservedPointerMap<hkpShapeKey, hkUint8> m_shapeKeyToMaxImpulse;   // +0x1C
    };
};

hkpBreakOffPartsUtil::LimitContactImpulseUtil::LimitContactImpulseUtil(hkpBreakOffPartsUtil *breakUtil, hkpEntity *entity)
    : m_entity(entity)
{
    m_maxImpulse.m_value = 0xff;
    m_maxImpulseFactor = lbl_82134508;
    entity->m_limitContactImpulseUtilAndFlag = this;
    entity->addContactListener(this);
}
