// hkpMultiThreadedSimulation::hkpMultiThreadedSimulation(hkpWorld *world)
// (Physics/Dynamics/World/Simulation/Multithreaded/hkpMultiThreadedSimulation.cpp):
// the out-of-line hkpContinuousSimulation constructor (fn_82DB6028), the three
// broad-phase listener members, the cross-island pair arrays and their critical
// sections, then the listeners are hooked into the world's broad-phase dispatcher.
#include "havok/hkBase.h"
#include "havok/hkpBroadPhase.h"
#include "havok/hkpTypedBroadPhaseDispatcher.h"
#include "havok/hkpWorld.h"
#include "havok/hkpWorldObject.h"
#include "havok/hkpMultiThreadedSimulation.h"

class hkpBroadPhaseHandle;

class hkpTypedBroadPhaseHandlePair {
public:
    hkpBroadPhaseHandle *m_a;
    hkpBroadPhaseHandle *m_b;
};

hkpMultiThreadedSimulation::hkpMultiThreadedSimulation(hkpWorld *world)
    : hkpContinuousSimulation(world),
      m_addCrossIslandPairCriticalSection(4000),
      m_removeCrossIslandPairCriticalSection(4000),
      m_toiQueueCriticalSection(4000),
      m_phantomCriticalSection(4000)
{
    m_unknownC8 = HK_NULL;
    m_crossIslandPairsCollectingActive = false;
    m_world->m_broadPhase->enableMultiThreading(10000);

    m_entityEntityBroadPhaseListener.m_simulation = this;
    m_phantomBroadPhaseListener.m_criticalSection = &m_phantomCriticalSection;

    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_entityEntityBroadPhaseListener,
                                                        hkpWorldObject::BROAD_PHASE_ENTITY, hkpWorldObject::BROAD_PHASE_ENTITY);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_phantomBroadPhaseListener,
                                                        hkpWorldObject::BROAD_PHASE_PHANTOM, hkpWorldObject::BROAD_PHASE_ENTITY);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_phantomBroadPhaseListener,
                                                        hkpWorldObject::BROAD_PHASE_ENTITY, hkpWorldObject::BROAD_PHASE_PHANTOM);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_phantomBroadPhaseListener,
                                                        hkpWorldObject::BROAD_PHASE_PHANTOM, hkpWorldObject::BROAD_PHASE_PHANTOM);

    m_broadPhaseBorderListener.m_criticalSection = &m_phantomCriticalSection;
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_broadPhaseBorderListener,
                                                        hkpWorldObject::BROAD_PHASE_ENTITY, hkpWorldObject::BROAD_PHASE_BORDER);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_broadPhaseBorderListener,
                                                        hkpWorldObject::BROAD_PHASE_BORDER, hkpWorldObject::BROAD_PHASE_ENTITY);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_broadPhaseBorderListener,
                                                        hkpWorldObject::BROAD_PHASE_PHANTOM, hkpWorldObject::BROAD_PHASE_BORDER);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_broadPhaseBorderListener,
                                                        hkpWorldObject::BROAD_PHASE_BORDER, hkpWorldObject::BROAD_PHASE_PHANTOM);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_broadPhaseBorderListener,
                                                        hkpWorldObject::BROAD_PHASE_BORDER, hkpWorldObject::BROAD_PHASE_BORDER);
}
