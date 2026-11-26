// hkpMultiThreadedSimulation::~hkpMultiThreadedSimulation
// (Physics/Dynamics/World/Simulation/Multithreaded/hkpMultiThreadedSimulation.cpp): an empty body;
// the two cross-island pair arrays and the three broad-phase listener members are destroyed in
// reverse order (the critical sections' destructors are empty on this platform), then
// ~hkpContinuousSimulation (out of line).
#include "havok/hkBase.h"
#include "havok/hkpBroadPhaseListener.h"
#include "havok/hkpContinuousSimulation.h"
#include "havok/hkCriticalSection.h"

struct hkpBroadPhaseHandlePairStub {
    void *m_a;
    void *m_b;
};

class hkpMultiThreadedSimulation : public hkpContinuousSimulation {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpMultiThreadedSimulation(hkpWorld *world);
    virtual ~hkpMultiThreadedSimulation();

    class MtEntityEntityBroadPhaseListener : public hkpBroadPhaseListener {
    public:
        virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        hkpMultiThreadedSimulation *m_simulation;
    };
    class MtPhantomBroadPhaseListener : public hkpBroadPhaseListener {
    public:
        virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        hkCriticalSection *m_criticalSection;
    };
    class MtBroadPhaseBorderListener : public hkpBroadPhaseListener {
    public:
        virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
        hkCriticalSection *m_criticalSection;
    };

    MtEntityEntityBroadPhaseListener m_entityEntityBroadPhaseListener;   // +0x50
    MtPhantomBroadPhaseListener m_phantomBroadPhaseListener;             // +0x58
    MtBroadPhaseBorderListener m_broadPhaseBorderListener;               // +0x60
    hkBool m_crossIslandPairsCollectingActive;                           // +0x68
    hkArray<hkpBroadPhaseHandlePairStub> m_addedCrossIslandPairs;        // +0x6C
    hkCriticalSection m_addCrossIslandPairCriticalSection;               // +0x78
    hkArray<hkpBroadPhaseHandlePairStub> m_removedCrossIslandPairs;      // +0x94
    hkCriticalSection m_removeCrossIslandPairCriticalSection;            // +0xA0
    char m_rest[0x15c - 0xbc];                                           // +0xBC
};

hkpMultiThreadedSimulation::~hkpMultiThreadedSimulation()
{
}
