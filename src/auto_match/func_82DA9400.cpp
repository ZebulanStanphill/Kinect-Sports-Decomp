// hkpMultiThreadedSimulation::hkpMultiThreadedSimulation(hkpWorld *world)
// (Physics/Dynamics/World/Simulation/Multithreaded/hkpMultiThreadedSimulation.cpp):
// the out-of-line hkpContinuousSimulation constructor (fn_82DB6028), the three
// broad-phase listener members, the cross-island pair arrays and their critical
// sections, then the listeners are hooked into the world's broad-phase dispatcher.
#include "havok/hkBase.h"

class hkpWorld;
class hkpEntity;
class hkpBroadPhaseHandle;

class hkCriticalSection;
extern "C" void fn_82CEFBD0(hkCriticalSection *self, int spinCount);   // hkCriticalSection::hkCriticalSection
// Common/Base/Thread/CriticalSection/hkCriticalSection.h: 0x1C bytes, inline empty destructor.
class hkCriticalSection {
public:
    HK_FORCE_INLINE hkCriticalSection(int spinCount = 0) { fn_82CEFBD0(this, spinCount); }
    hkUint8 m_section[0x1C];
};

// A member at +0xBC whose constructor (fn_82D808C0, Matching C) stores 70 in its first word.
struct hkpMtUnknownBC;
extern "C" void fn_82D808C0(hkpMtUnknownBC *self);
struct hkpMtUnknownBC {
    HK_FORCE_INLINE hkpMtUnknownBC() { fn_82D808C0(this); }
    int m_value;   // +0x0 = 70
    int m_pad[2];
};

// The world's lazily created critical-section holder at +0x58.
struct hkpWorldMtLock;
extern "C" void fn_83095FB8(hkpWorldMtLock *self, int spinCount);

class hkpBroadPhaseListener {
public:
    virtual ~hkpBroadPhaseListener() {}
    virtual void addCollisionPair(void *pair);
    virtual void removeCollisionPair(void *pair);
};

struct hkpTypedBroadPhaseHandlePair {
    hkpBroadPhaseHandle *m_a;
    hkpBroadPhaseHandle *m_b;
};

// hkpTypedBroadPhaseDispatcher: listeners indexed by the two objects' broad-phase types.
class hkpTypedBroadPhaseDispatcher {
public:
    void setBroadPhaseListener(hkpBroadPhaseListener *listener, int typeA, int typeB)
    {
        m_broadPhaseListeners[typeA][typeB] = listener;
    }
    void *m_broadPhase;                                 // +0x0
    hkpBroadPhaseListener *m_broadPhaseListeners[4][8];   // +0x4
};

class hkpWorld {
public:
    char m_pad0[0x58];
    hkpWorldMtLock *m_mtLock;                              // +0x58
    char m_pad5C[0x64 - 0x5C];
    hkpTypedBroadPhaseDispatcher *m_broadPhaseDispatcher;  // +0x64
};

// hkpSimulation / hkpContinuousSimulation (as in func_82DB6028.cpp), 0x50 bytes.
class hkpSimulation : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpSimulation(hkpWorld *world);
    virtual ~hkpSimulation();

    hkUint32 m_determinismCheckFrameCounter;   // +0x8
    hkpWorld *m_world;                         // +0xC
    hkUint8 m_lastProcessingStep;              // +0x10
    hkReal m_currentTime;                      // +0x14
    hkReal m_currentPsiTime;                   // +0x18
    hkReal m_physicsDeltaTime;                 // +0x1C
    hkReal m_simulateUntilTime;                // +0x20
    hkReal m_frameMarkerPsiSnap;               // +0x24
    hkUint32 m_previousStepResult;             // +0x28
    hkUint32 m_unknown2C;                      // +0x2C
};

class hkpContinuousSimulation : public hkpSimulation {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpContinuousSimulation(hkpWorld *world);   // fn_82DB6028
    virtual ~hkpContinuousSimulation();

    hkUint8 m_data[0x50 - 0x30];   // +0x30
};

class hkpMultiThreadedSimulation : public hkpContinuousSimulation {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);

    class MtEntityEntityBroadPhaseListener : public hkpBroadPhaseListener {
    public:
        MtEntityEntityBroadPhaseListener() : m_simulation(HK_NULL) {}
        virtual void addCollisionPair(void *pair);
        virtual void removeCollisionPair(void *pair);
        hkpMultiThreadedSimulation *m_simulation;   // +0x4
    };
    class MtPhantomBroadPhaseListener : public hkpBroadPhaseListener {
    public:
        MtPhantomBroadPhaseListener() : m_criticalSection(HK_NULL) {}
        virtual void addCollisionPair(void *pair);
        virtual void removeCollisionPair(void *pair);
        hkCriticalSection *m_criticalSection;   // +0x4
    };
    class MtBroadPhaseBorderListener : public hkpBroadPhaseListener {
    public:
        MtBroadPhaseBorderListener() : m_criticalSection(HK_NULL) {}
        virtual void addCollisionPair(void *pair);
        virtual void removeCollisionPair(void *pair);
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
    fn_83095FB8(m_world->m_mtLock, 10000);

    m_entityEntityBroadPhaseListener.m_simulation = this;
    m_phantomBroadPhaseListener.m_criticalSection = &m_phantomCriticalSection;

    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_entityEntityBroadPhaseListener, 1, 0);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_phantomBroadPhaseListener, 2, 0);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_phantomBroadPhaseListener, 1, 1);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_phantomBroadPhaseListener, 2, 1);

    m_broadPhaseBorderListener.m_criticalSection = &m_phantomCriticalSection;
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_broadPhaseBorderListener, 1, 2);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_broadPhaseBorderListener, 3, 0);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_broadPhaseBorderListener, 2, 2);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_broadPhaseBorderListener, 3, 1);
    world->m_broadPhaseDispatcher->setBroadPhaseListener(&m_broadPhaseBorderListener, 3, 2);
}
