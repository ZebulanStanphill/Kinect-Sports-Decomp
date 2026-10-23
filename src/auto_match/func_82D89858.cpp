// hkpPhantomBroadPhaseListener scalar deleting destructor (Physics/Dynamics/World/BroadPhaseBorder and
// Phantom listeners), generated from the implicit destructor; identical code also serves
// hkpBroadPhaseBorderListener, hkpEntityEntityBroadPhaseListener and hkpNullBroadPhaseListener (all
// hkReferencedObject + the interface hkpBroadPhaseListener at +0x8, RTTI). The name is the first of them
// (lowest vtable address, emitted with hkpWorld's code). The function at the end only makes the compiler emit
// the vtable.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpWorld;
struct hkpTypedBroadPhaseHandlePair;

class hkpBroadPhaseListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpBroadPhaseListener() {}
    virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair) = 0;
    virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair) = 0;
};

class hkpPhantomBroadPhaseListener : public hkReferencedObject, public hkpBroadPhaseListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpPhantomBroadPhaseListener(hkpWorld *world) {}
    virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
    virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
};

void emitVtable_82D89858(void *p, hkpWorld *world) { new (p) hkpPhantomBroadPhaseListener(world); }
