// hkpClosestRayHitCollector scalar deleting destructor (Physics/Collide/Query/Collector/RayCollector/
// hkpClosestRayHitCollector.h); identical code also serves hkHeightFieldRayForwardingCollector and two
// collectors local to a source file. The implicit destructor leaves hkpRayHitCollector's vtable store; the
// collectors have no class allocator, so deleting frees through the global operator delete, fn_8265CA20.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpCdBody;
struct hkpShapeRayCastCollectorOutput;

class hkpRayHitCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void addRayHit(const hkpCdBody &cdBody, const hkpShapeRayCastCollectorOutput &hitInfo);   // pure in Havok
    virtual ~hkpRayHitCollector() {}

    hkReal m_earlyOutHitFraction;   // +0x4
};

class hkpClosestRayHitCollector : public hkpRayHitCollector {
public:
    hkpClosestRayHitCollector() {}
    virtual void addRayHit(const hkpCdBody &cdBody, const hkpShapeRayCastCollectorOutput &hitInfo);
};

inline void *operator new(hk_size_t, void *p) throw() { return p; }

void emitVtable_82D47BC0(void *p) { ::new (p) hkpClosestRayHitCollector; }
