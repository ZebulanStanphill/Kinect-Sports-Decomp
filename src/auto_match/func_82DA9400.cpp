// hkpMultiThreadedSimulation::hkpMultiThreadedSimulation(hkpWorld *world)
// (Physics/Dynamics/World/Simulation/Multithreaded/hkpMultiThreadedSimulation.cpp):
// the out-of-line hkpContinuousSimulation constructor (fn_82DB6028), the three
// broad-phase listener members, the cross-island pair arrays and their critical
// sections, then the listeners are hooked into the world's broad-phase dispatcher.
#include "havok/hkBase.h"
#include "havok/hkpContinuousSimulation.h"
#include "havok/hkpBroadPhase.h"
#include "havok/hkpBroadPhaseListener.h"
#include "havok/hkpTypedBroadPhaseDispatcher.h"
#include "havok/hkpWorld.h"
#include "havok/hkpWorldObject.h"
#include "havok/hkCriticalSection.h"

class hkpBroadPhaseHandle;

// A member at +0xBC whose constructor (fn_82D808C0, Matching C) stores 70 in its first word.
struct hkpMtUnknownBC;
extern "C" void fn_82D808C0(hkpMtUnknownBC *self);
struct hkpMtUnknownBC {
    HK_FORCE_INLINE hkpMtUnknownBC() { fn_82D808C0(this); }
    int m_value;   // +0x0 = 70
    int m_pad[2];
};

class hkpTypedBroadPhaseHandlePair {
public:
    hkpBroadPhaseHandle *m_a;
    hkpBroadPhaseHandle *m_b;
};

class hkpMultiThreadedSimulation : public hkpContinuousSimulation {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);

    class MtEntityEntityBroadPhaseListener : public hkpBroadPhaseListener {
    public:
        MtEntityEntityBroadPhaseListener() : m_simulation(HK_NULL) {}
        virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        hkpMultiThreadedSimulation *m_simulation;   // +0x4
    };
    class MtPhantomBroadPhaseListener : public hkpBroadPhaseListener {
    public:
        MtPhantomBroadPhaseListener() : m_criticalSection(HK_NULL) {}
        virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        hkCriticalSection *m_criticalSection;   // +0x4
    };
    class MtBroadPhaseBorderListener : public hkpBroadPhaseListener {
    public:
        MtBroadPhaseBorderListener() : m_criticalSection(HK_NULL) {}
        virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        hkCriticalSection *m_criticalSection;   // +0x4
    };

    hkpMultiThreadedSimulation(hkpWorld *world);
    virtual ~hkpMultiThreadedSimulation();

    MtEntityEntityBroadPhaseListener m_entityEntityBroadPhaseListener;   // +0x50
    MtPhantomBroadPhaseListener m_phantomBroadPhaseListener;             // +0x58
    MtBroadPhaseBorderListener m_broadPhaseBorderListener;               // +0x60
    hkBool m_crossIslandPairsCollectingActive;                           // +0x68
    hkArray<hkpTypedBroadPhaseHandlePair> m_addedCrossIslandPairs;       // +0x6C
    hkCriticalSection m_addCrossIslandPairCriticalSection;               // +0x78
    hkArray<hkpTypedBroadPhaseHandlePair> m_removedCrossIslandPairs;     // +0x94
    hkCriticalSection m_removeCrossIslandPairCriticalSection;            // +0xA0
    hkpMtUnknownBC m_unknownBC;                                          // +0xBC
    void *m_unknownC8;                                                   // +0xC8
    hkUint8 m_padCC[0x100 - 0xCC];
    hkCriticalSection m_toiQueueCriticalSection;                         // +0x100
    hkUint8 m_pad11C[0x140 - 0x11C];
    hkCriticalSection m_phantomCriticalSection;                          // +0x140
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
