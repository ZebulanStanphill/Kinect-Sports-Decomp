#ifndef HAVOK_HKPCDPOINTCOLLECTOR_H
#define HAVOK_HKPCDPOINTCOLLECTOR_H

#include "havok/hkBase.h"

class hkpCdPoint;

// Receives the points that a closest-point query or a linear cast finds. reset() sets the
// early-out distance to HK_REAL_MAX, which is __real@7f7fffee (3.40282e38f) in the game.
class hkpCdPointCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpCdPointCollector);
    hkpCdPointCollector() { reset(); }
    virtual ~hkpCdPointCollector() {}
    virtual void addCdPoint(const hkpCdPoint &point) = 0;
    virtual void reset() { m_earlyOutDistance = 3.40282e+38f; }

    hkReal m_earlyOutDistance;   // +0x4
};

#endif
