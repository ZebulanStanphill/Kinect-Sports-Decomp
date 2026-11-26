// hkpRayHitCollector (Physics/Collide/Query/Collector/RayCollector/hkpRayHitCollector.h), 0x8 bytes: receives
// the hits of a ray cast. An interface without base class (RTTI): ??_7hkpRayHitCollector@@6B@ is the pure
// addRayHit, then the deleting destructor (825CD138), which frees through the global operator delete
// (fn_8265CA20). The constructor sets the early-out fraction to 1 (82DF0C68 inlines it). The names follow
// Havok's header.
#ifndef HAVOK_HKPRAYHITCOLLECTOR_H
#define HAVOK_HKPRAYHITCOLLECTOR_H

#include "havok/hkBase.h"

class hkpCdBody;
struct hkpShapeRayCastCollectorOutput;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpRayHitCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    HK_FORCE_INLINE hkpRayHitCollector() { reset(); }
    HK_FORCE_INLINE void reset() { m_earlyOutHitFraction = 1.0f; }
    virtual void addRayHit(const hkpCdBody &cdBody, const hkpShapeRayCastCollectorOutput &hitInfo) = 0;   // +0x0
    virtual ~hkpRayHitCollector() {}                                                                      // +0x4

    hkReal m_earlyOutHitFraction;   // +0x4
};

#endif
