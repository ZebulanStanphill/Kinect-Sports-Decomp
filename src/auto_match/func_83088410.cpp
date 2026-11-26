// hkpTypedBroadPhaseDispatcher::hkpTypedBroadPhaseDispatcher(): every listener slot points at the null listener (each conversion to hkpBroadPhaseListener * keeps its null check).
// hkpTypedBroadPhaseDispatcher (Physics/Dynamics/World/BroadPhaseBorder?
// hkpTypedBroadPhaseDispatcher.h): no vtable; an 8x8 table of listeners per
// broadphase type pair (+0x0), all pointing at the embedded null listener
// (+0x100) by default. hkpNullBroadPhaseListener: hkReferencedObject +
// hkpBroadPhaseListener at +0x8 (RTTI).
#include "havok/hkBase.h"
#include "havok/hkpNullBroadPhaseListener.h"

class hkpTypedBroadPhaseDispatcher {
public:
    hkpTypedBroadPhaseDispatcher();
    ~hkpTypedBroadPhaseDispatcher();

    enum { HK_MAX_BROADPHASE_TYPE = 8 };
    hkpBroadPhaseListener *m_broadPhaseListeners[HK_MAX_BROADPHASE_TYPE][HK_MAX_BROADPHASE_TYPE];   // +0x0
    hkpNullBroadPhaseListener m_nullBroadPhaseListener;                                              // +0x100
};

hkpTypedBroadPhaseDispatcher::hkpTypedBroadPhaseDispatcher()
{
    for (int a = 0; a < HK_MAX_BROADPHASE_TYPE; a++)
        for (int b = 0; b < HK_MAX_BROADPHASE_TYPE; b++)
            m_broadPhaseListeners[a][b] = &m_nullBroadPhaseListener;
}
