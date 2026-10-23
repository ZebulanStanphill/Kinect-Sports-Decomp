// hkpMultiThreadedSimulation::~hkpMultiThreadedSimulation
// (Physics/Dynamics/World/Simulation/Multithreaded/hkpMultiThreadedSimulation.cpp): an empty body;
// the two cross-island pair arrays and the three broad-phase listener members are destroyed in
// reverse order (the critical sections' destructors are empty on this platform), then
// ~hkpContinuousSimulation (out of line).
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpWorld;
class hkpEntity;
class hkpTypedBroadPhaseHandlePair;

// hkpSimulation (Physics/Dynamics/World/Simulation/hkpSimulation.h), 0x30 bytes.
class hkpSimulation : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpSimulation(hkpWorld *world);
    virtual ~hkpSimulation();

    hkUint32 m_determinismCheckFrameCounter;   // +0x8
    hkpWorld *m_world;                         // +0xC
    hkUint8 m_lastProcessingStep;              // +0x10 hkEnum<LastProcessingStep, hkUint8>
    hkReal m_currentTime;                      // +0x14
    hkReal m_currentPsiTime;                   // +0x18
    hkReal m_physicsDeltaTime;                 // +0x1C
    hkReal m_simulateUntilTime;                // +0x20
    hkReal m_frameMarkerPsiSnap;               // +0x24
    hkUint32 m_previousStepResult;             // +0x28
    hkUint32 m_unknown2C;                      // +0x2C
};

class hkpToiResourceMgr;

// hkpContinuousSimulation (Physics/Dynamics/World/Simulation/Continuous/hkpContinuousSimulation.h), 0x50 bytes.
class hkpContinuousSimulation : public hkpSimulation {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpContinuousSimulation(hkpWorld *world);
    virtual ~hkpContinuousSimulation();

    hkArray<char> m_toiEvents;                                          // +0x30 (hkArray<hkpToiEvent>)
    hkPointerMap<hkpEntity *, int> m_entitiesNeedingPsiCollisionDetection;   // +0x3C
    hkpToiResourceMgr *m_toiResourceMgr;                                // +0x48
    int m_toiCounter;                                                   // +0x4C
};

// hkpBroadPhaseListener (Physics/Collide/BroadPhase/hkpBroadPhaseListener.h): an interface with no base
// class (RTTI); the destructor is slot 0, then the two pair callbacks (pure).
class hkpBroadPhaseListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpBroadPhaseListener() {}
    virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair) = 0;
    virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair) = 0;
};

// hkCriticalSection (Common/Base/Thread/CriticalSection/hkCriticalSection.h): its constructor is out of
// line (fn_82CEFBD0); nothing is destroyed.
class hkCriticalSection {
public:
    char m_section[0x1c];
};

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
