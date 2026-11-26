// hkpFixedBufferCdPointCollector (Physics/Collide/Query/Collector/PointCollector/
// hkpFixedBufferCdPointCollector.h), 0x18 bytes: collects points into a buffer that the caller provides.
// ??_7hkpFixedBufferCdPointCollector@@6B@: the deleting destructor (83099D28), addCdPoint (83099B48) and
// hkpCdPointCollector's reset. The layout comes from the constructor as 8309A2A0 inlines it. The member names
// follow Havok's header.
#ifndef HAVOK_HKPFIXEDBUFFERCDPOINTCOLLECTOR_H
#define HAVOK_HKPFIXEDBUFFERCDPOINTCOLLECTOR_H

#include "havok/hkpCdPointCollector.h"
#include "havok/hkpRootCdPoint.h"

class hkpFixedBufferCdPointCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpFixedBufferCdPointCollector);
    HK_FORCE_INLINE hkpFixedBufferCdPointCollector(hkpRootCdPoint *buffer, int capacity)
    {
        m_pointsArrayBase = buffer;
        m_nextFreePoint = buffer;
        m_capacity = capacity;
        m_numPoints = 0;
    }
    virtual void addCdPoint(const hkpCdPoint &point);

    hkpRootCdPoint *m_pointsArrayBase;   // +0x8
    hkpRootCdPoint *m_nextFreePoint;     // +0xC
    int m_capacity;                      // +0x10
    int m_numPoints;                     // +0x14
};

#endif
