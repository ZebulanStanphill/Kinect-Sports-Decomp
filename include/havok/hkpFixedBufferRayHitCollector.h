// hkpFixedBufferRayHitCollector (Physics/Collide/Query/Collector/RayCollector/hkpFixedBufferRayHitCollector.h),
// 0x1C bytes: collects ray hits into a buffer that the caller provides. ??_7hkpFixedBufferRayHitCollector@@6B@:
// addRayHit (83098448), then the deleting destructor (830983E0, which frees 0x1C bytes through Havok's
// non-virtual class allocator). The members follow the constructor inlined in 83098750 and 8309BF18 (the
// buffer at +0x8 and +0xC, the capacity at +0x10, two words cleared). The member names follow Havok's header.
#ifndef HAVOK_HKPFIXEDBUFFERRAYHITCOLLECTOR_H
#define HAVOK_HKPFIXEDBUFFERRAYHITCOLLECTOR_H

#include "havok/hkpRayHitCollector.h"

class hkpCollidable;
struct hkpWorldRayCastOutput;

class hkpFixedBufferRayHitCollector : public hkpRayHitCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpFixedBufferRayHitCollector);
    HK_FORCE_INLINE hkpFixedBufferRayHitCollector(hkpWorldRayCastOutput *buffer, int capacity)
        : m_rayCastOutputBase(buffer), m_nextFreeOutput(buffer), m_capacity(capacity), m_numOutputs(0),
          m_collidableOnPpu(HK_NULL) {}
    virtual void addRayHit(const hkpCdBody &cdBody, const hkpShapeRayCastCollectorOutput &hitInfo);

    hkpWorldRayCastOutput *m_rayCastOutputBase;   // +0x8
    hkpWorldRayCastOutput *m_nextFreeOutput;      // +0xC
    int m_capacity;                               // +0x10
    int m_numOutputs;                             // +0x14
    const hkpCollidable *m_collidableOnPpu;       // +0x18
};

#endif
