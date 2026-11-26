// hkpTypedBroadPhaseDispatcher (Physics/Dynamics/World/Util/BroadPhase/hkpTypedBroadPhaseDispatcher.h? the
// path is Havok's), 0x10C bytes, no vtable: an 8x8 table of broad-phase listeners indexed by the broad-phase
// types of the two objects of a pair (hkpWorldObject::BroadPhaseType). The out-of-line constructor (83088410)
// points every slot at the embedded null listener at +0x100; the world frees it with 0x10C bytes.
// hkpMultiThreadedSimulation's constructor (82DA9400) sets the slots of its listeners through
// setBroadPhaseListener.
#ifndef HAVOK_HKPTYPEDBROADPHASEDISPATCHER_H
#define HAVOK_HKPTYPEDBROADPHASEDISPATCHER_H

#include "havok/hkBase.h"

class hkpBroadPhaseListener;

class hkpTypedBroadPhaseDispatcher {
public:
    enum { HK_MAX_BROADPHASE_TYPE = 8 };

    hkpTypedBroadPhaseDispatcher();
    ~hkpTypedBroadPhaseDispatcher();

    void setBroadPhaseListener(hkpBroadPhaseListener *listener, int typeA, int typeB)
    {
        m_broadPhaseListeners[typeA][typeB] = listener;
    }

    hkpBroadPhaseListener *m_broadPhaseListeners[HK_MAX_BROADPHASE_TYPE][HK_MAX_BROADPHASE_TYPE];   // +0x0
    // An hkpNullBroadPhaseListener (hkReferencedObject, then hkpBroadPhaseListener at +0x8), which has no
    // header yet.
    hkUint8 m_nullBroadPhaseListener[0xC];                                                           // +0x100
};

#endif
