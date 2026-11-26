// hkpContinuousSimulation (Physics/Dynamics/World/Simulation/Continuous/hkpContinuousSimulation.h), 0x50
// bytes: the simulation with continuous (time of impact) collision handling. The constructor (82DB6028)
// sets m_lastProcessingStep, creates an hkpDefaultToiResourceMgr and reserves the TOI queue to the world's
// m_sizeOfToiEventQueue; the member names follow Havok's header. Its vtable (??_7hkpContinuousSimulation@@6B@,
// 18 slots) overrides most of hkpSimulation's and adds three; no unit names them.
#ifndef HAVOK_HKPCONTINUOUSSIMULATION_H
#define HAVOK_HKPCONTINUOUSSIMULATION_H

#include "havok/hkpSimulation.h"
#include "havok/hkpToiEvent.h"

class hkpEntity;
class hkpToiResourceMgr;

class hkpContinuousSimulation : public hkpSimulation {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpContinuousSimulation(hkpWorld *world);
    virtual ~hkpContinuousSimulation();

    hkArray<hkpToiEvent> m_toiEvents;                                        // +0x30
    hkPointerMap<hkpEntity *, int> m_entitiesNeedingPsiCollisionDetection;   // +0x3C
    hkpToiResourceMgr *m_toiResourceMgr;                                     // +0x48
    int m_toiCounter;                                                        // +0x4C
};

#endif
