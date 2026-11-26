// hkpPhantomBroadPhaseListener scalar deleting destructor (Physics/Dynamics/World/BroadPhaseBorder and
// Phantom listeners), generated from the implicit destructor; identical code also serves
// hkpBroadPhaseBorderListener, hkpEntityEntityBroadPhaseListener and hkpNullBroadPhaseListener (all
// hkReferencedObject + the interface hkpBroadPhaseListener at +0x8, RTTI). The name is the first of them
// (lowest vtable address, emitted with hkpWorld's code). The function at the end only makes the compiler emit
// the vtable.
#include "havok/hkBase.h"
#include "havok/hkpBroadPhaseListener.h"

class hkpWorld;

class hkpPhantomBroadPhaseListener : public hkReferencedObject, public hkpBroadPhaseListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpPhantomBroadPhaseListener(hkpWorld *world) {}
    virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
    virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
};

void emitVtable_82D89858(void *p, hkpWorld *world) { new (p) hkpPhantomBroadPhaseListener(world); }
