// hkpMultiRayConvexAgent::hkpMultiRayConvexAgent (Physics/Collide/Agent/MiscAgent/MultirayConvex/hkpMultiRayConvexAgent.cpp): one contact point id per ray of the multi-ray shape A, all invalid.
// Havok collision agents (Physics/Collide/Agent/hkpCollisionAgent.h, hkpIterativeLinearCastAgent.h,
// Agent/Util/Symmetric/hkpSymmetricAgent.h, hkpSymmetricAgentLinearCast.h, hkpSymmetricAgentFlip*Collector.h).
// Hierarchy from the RTTI: hkpSymmetricAgent<AGENT> and hkpSymmetricAgentLinearCast<AGENT> derive from AGENT;
// the agents derive from hkpCollisionAgent (some through hkpIterativeLinearCastAgent) -> hkReferencedObject.
// hkpCollisionAgent vtable, from the hkpSymmetricAgent<..> slots that flip the bodies: +0xC getPenetrations
// (hkpSymmetricAgentFlipBodyCollector), +0x10 getClosestPoints (hkpSymmetricAgentFlipCollector), +0x14
// linearCast (hkpSymmetricAgentFlipCastCollector), +0x18 processCollision, +0x1C cleanup.
// The static flipped functions (registered with the collision dispatcher) are hkpSymmetricAgent<AGENT>'s, also for
// the agents whose instances are hkpSymmetricAgentLinearCast<AGENT> (that template only overrides virtuals).
// The creation functions are statics of each agent, defined in its .cpp next to registerAgent (which registers
// them, for example fn_82D6EC40 registers fn_82D6EBD0 with hkpSymmetricAgent<hkpBvAgent>'s statics).
// The collectors are interfaces without base class and with Havok's non-virtual class allocator; their
// constructors call reset(), which sets m_earlyOut = false / m_earlyOutDistance = HK_REAL_MAX. The game's
// HK_REAL_MAX constant is __real@7f7fffee (3.40282e38f).
#include "havok/hkBase.h"

// LocalInplaceArray<T, N> (Common/Base/Container/Array/hkArray.h): an hkArray whose first buffer is the
// N elements that follow it (capacity N | DONT_DEALLOCATE_FLAG). setSize/reserve are hkArray's: the
// allocator is fetched first, then the capacity is doubled or set to n through hkArrayUtil::_reserve
// .

struct hkArrayUtil_ {
    static HK_FORCE_INLINE void HK_CALL _reserve(hkMemoryAllocator &a, void *array, int reqCapacity, int sizeElem)
    {
        hkArrayUtil::_reserve(a, array, reqCapacity, sizeElem);
    }
};

template <typename T, unsigned N>
class LocalInplaceArray : public hkArray<T> {
public:
    HK_FORCE_INLINE LocalInplaceArray(int size = 0)
    {
        this->m_data = m_storage;
        this->m_size = size;
        this->m_capacityAndFlags = N | hkArrayBase<T>::DONT_DEALLOCATE_FLAG;
    }
    HK_FORCE_INLINE ~LocalInplaceArray() {}
    HK_FORCE_INLINE void _reserve(hkMemoryAllocator &a, int n)
    {
        const int capacity = this->getCapacity();
        if (capacity < n) {
            int cap2 = 2 * capacity;
            int newSize = (n < cap2) ? cap2 : n;
            hkArrayUtil_::_reserve(a, this, newSize, sizeof(T));
        }
    }
    HK_FORCE_INLINE void _setSize(hkMemoryAllocator &a, int n)
    {
        _reserve(a, n);
        this->m_size = n;
    }
    HK_FORCE_INLINE void setSize(int n) { _setSize(hkContainerHeapAllocator::get(this), n); }

    T m_storage[N];
};

typedef hkUint16 hkContactPointId;
#define HK_INVALID_CONTACT_POINT 0xffff

#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiRayShape.h"

class hkpMultiRayConvexAgent : public hkpIterativeLinearCastAgent {
public:
    hkpMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                           hkpContactMgr *mgr);

    struct ContactPointInfo {
        hkContactPointId m_contactPointId;
    };
    LocalInplaceArray<ContactPointInfo, 4> m_contactInfo;   // +0xC
};

hkpMultiRayConvexAgent::hkpMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpContactMgr *mgr)
    : hkpIterativeLinearCastAgent(mgr)
{
    const hkpMultiRayShape *msA = static_cast<const hkpMultiRayShape *>(bodyA.getShape());
    int nRay = msA->getRays().getSize();
    m_contactInfo.setSize(nRay);
    for (int i = 0; i < nRay; i++)
        m_contactInfo[i].m_contactPointId = HK_INVALID_CONTACT_POINT;
}
