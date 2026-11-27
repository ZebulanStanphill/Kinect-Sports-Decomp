// hkpTypedBroadPhaseDispatcher::~hkpTypedBroadPhaseDispatcher(): only the null listener's base destructors (hkpBroadPhaseListener's vtable at +0x108, hkBaseObject's at +0x100).
// hkpTypedBroadPhaseDispatcher (Physics/Dynamics/World/BroadPhaseBorder?
// hkpTypedBroadPhaseDispatcher.h): no vtable; an 8x8 table of listeners per
// broadphase type pair (+0x0), all pointing at the embedded null listener
// (+0x100) by default. hkpNullBroadPhaseListener: hkReferencedObject +
// hkpBroadPhaseListener at +0x8 (RTTI).
#include "havok/hkpTypedBroadPhaseDispatcher.h"

hkpTypedBroadPhaseDispatcher::~hkpTypedBroadPhaseDispatcher() {}
