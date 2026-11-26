// hkpClosestCdPointCollector (Physics/Collide/Query/Collector/PointCollector/hkpClosestCdPointCollector.h),
// 0x40 bytes: keeps the closest point found. ??_7hkpClosestCdPointCollector@@6B@: the deleting destructor
// (82D5D3E8), addCdPoint (82D75C10, which fills m_hitPoint at +0x10 and lowers m_earlyOutDistance) and reset
// (82D5D248). reset is inline: the constructor inlines it (82DBED98, 82DF0890, 82DF2A08). The member names
// follow Havok's header.
#ifndef HAVOK_HKPCLOSESTCDPOINTCOLLECTOR_H
#define HAVOK_HKPCLOSESTCDPOINTCOLLECTOR_H

#include "havok/hkpCdPointCollector.h"
#include "havok/hkpRootCdPoint.h"

class hkpClosestCdPointCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpClosestCdPointCollector);
    HK_FORCE_INLINE hkpClosestCdPointCollector() { reset(); }
    virtual void addCdPoint(const hkpCdPoint &point);
    HK_FORCE_INLINE virtual void reset()
    {
        m_hitPoint.m_rootCollidableA = HK_NULL;
        m_hitPoint.m_contact.setDistance(3.40282e+38f);
        hkpCdPointCollector::reset();
    }
    HK_FORCE_INLINE hkBool hasHit() const { return m_hitPoint.m_rootCollidableA != HK_NULL; }
    HK_FORCE_INLINE const hkpRootCdPoint &getHit() const { return m_hitPoint; }

    hkpRootCdPoint m_hitPoint;   // +0x10
};

#endif
