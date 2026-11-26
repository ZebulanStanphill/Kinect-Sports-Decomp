// hkpBroadPhase (Physics/Internal/Collide/BroadPhase/hkpBroadPhase.h): the interface of the broad phase
// (hkp3AxisSweep implements it). The members are the two the constructor (83095F58) sets: it disables the
// multithread check and clears the critical section, which enableMultiThreading (fn_83095FB8) creates.
// Whatever follows +0x14 belongs to the implementations as far as the game's code shows. The constructor and
// the destructor (fn_83096048) are out of line; no unit names the virtual functions after hkReferencedObject's.
#ifndef HAVOK_HKPBROADPHASE_H
#define HAVOK_HKPBROADPHASE_H

#include "havok/hkBase.h"
#include "havok/hkMultiThreadCheck.h"

class hkCriticalSection;
class hkpBroadPhase;

// hkpBroadPhase::enableMultiThreading(int spinCountForCriticalSection): creates m_criticalSection if it is
// null (hkpMultiThreadedSimulation's constructor, 82DA9400, calls it with 10000).
extern "C" void fn_83095FB8(hkpBroadPhase *self, int spinCount);

class hkpBroadPhase : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBroadPhase();
    hkpBroadPhase(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkpBroadPhase();

    void enableMultiThreading(int spinCountForCriticalSection) { fn_83095FB8(this, spinCountForCriticalSection); }

    hkMultiThreadCheck m_multiThreadCheck;   // +0x8
    hkCriticalSection *m_criticalSection;    // +0x10
};

#endif
