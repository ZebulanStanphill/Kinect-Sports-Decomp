// hkpSimpleClosestContactCollector (Physics/Collide/Query/Collector/PointCollector/
// hkpSimpleClosestContactCollector.h), 0x30 bytes: keeps the closest contact point found, without the bodies.
// ??_7hkpSimpleClosestContactCollector@@6B@: a deleting destructor folded with
// hkpSymmetricAgentFlipCastCollector's, addCdPoint (82D76320) and reset (82D5D268). The callers' inlined
// constructors (82D5C4B0, 82D6DED8, 82D6E2C8, 82D6E680) clear the hkBool at +0x8 and set the distance (+0x2C,
// the w of the contact's normal) and the early-out distance to HK_REAL_MAX. The member names follow Havok's
// header.
#ifndef HAVOK_HKPSIMPLECLOSESTCONTACTCOLLECTOR_H
#define HAVOK_HKPSIMPLECLOSESTCONTACTCOLLECTOR_H

#include "havok/hkContactPoint.h"
#include "havok/hkpCdPointCollector.h"

class hkpSimpleClosestContactCollector : public hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSimpleClosestContactCollector);
    HK_FORCE_INLINE hkpSimpleClosestContactCollector() { reset(); }
    virtual void addCdPoint(const hkpCdPoint &point);
    HK_FORCE_INLINE virtual void reset()
    {
        m_hasHit = false;
        m_contactPoint.setDistance(3.40282e+38f);
        hkpCdPointCollector::reset();
    }

    hkBool m_hasHit;                  // +0x8
    hkContactPoint m_contactPoint;    // +0x10
};

#endif
