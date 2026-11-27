// hkpTypedBroadPhaseDispatcher::hkpTypedBroadPhaseDispatcher(): every listener slot points at the null listener (each conversion to hkpBroadPhaseListener * keeps its null check).
// hkpTypedBroadPhaseDispatcher (Physics/Dynamics/World/BroadPhaseBorder?
// hkpTypedBroadPhaseDispatcher.h): no vtable; an 8x8 table of listeners per
// broadphase type pair (+0x0), all pointing at the embedded null listener
// (+0x100) by default. hkpNullBroadPhaseListener: hkReferencedObject +
// hkpBroadPhaseListener at +0x8 (RTTI).
#include "havok/hkpTypedBroadPhaseDispatcher.h"

hkpTypedBroadPhaseDispatcher::hkpTypedBroadPhaseDispatcher()
{
    for (int a = 0; a < HK_MAX_BROADPHASE_TYPE; a++)
        for (int b = 0; b < HK_MAX_BROADPHASE_TYPE; b++)
            m_broadPhaseListeners[a][b] = &m_nullBroadPhaseListener;
}
