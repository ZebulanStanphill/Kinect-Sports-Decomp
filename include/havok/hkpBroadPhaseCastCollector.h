// hkpBroadPhaseCastCollector (Physics/Collide/BroadPhase/hkpBroadPhaseCastCollector.h): what a broad-phase
// ray or AABB cast reports its handles to. It has no base class (RTTI), so its deleting destructor
// (??_GhkpBroadPhaseCastCollector@@UAAPAXI@Z, 82D80878) frees through the global operator delete,
// fn_8265CA20. Its vtable (??_7hkpBroadPhaseCastCollector@@6B@) is the deleting destructor and one pure
// function, which hkCpuWorldRayCastCollector overrides; its name and parameters follow Havok's header.
#ifndef HAVOK_HKPBROADPHASECASTCOLLECTOR_H
#define HAVOK_HKPBROADPHASECASTCOLLECTOR_H

#include "havok/hkBase.h"

class hkpBroadPhaseHandle;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpBroadPhaseCastCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpBroadPhaseCastCollector() {}
    virtual hkReal addBroadPhaseHandle(const hkpBroadPhaseHandle *broadphaseHandle, int castIndex) = 0;
};

#endif
