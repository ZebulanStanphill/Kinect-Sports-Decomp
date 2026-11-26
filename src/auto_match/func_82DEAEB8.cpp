// hkpBreakOffPartsUtil::LimitContactImpulseUtil::LimitContactImpulseUtil(hkpBreakOffPartsUtil *, hkpEntity *)
// (hkpBreakOffPartsUtil.cpp).
#include "havok/hkBase.h"
#include "havok/hkpEntity.h"
#include "havok/hkpCollisionListener.h"

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
    m_maxImpulseFactor = 3.40282e+38f;
    entity->m_limitContactImpulseUtilAndFlag = this;
    entity->addContactListener(this);
}
