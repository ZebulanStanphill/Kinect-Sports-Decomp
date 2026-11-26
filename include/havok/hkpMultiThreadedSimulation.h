// hkpMultiThreadedSimulation (Physics/Dynamics/World/Simulation/Multithreaded/hkpMultiThreadedSimulation.h),
// 0x15C bytes: the continuous simulation that runs its jobs on several threads, and its three nested broad-phase
// listeners (8 bytes each). The layout is the constructor's (82DA9400, out of line): the listeners at +0x50, +0x58
// and +0x60 (their constructors clear their pointer), the flag at +0x68, the two cross-island pair arrays at +0x6C
// and +0x94, each followed by its critical section (spin count 4000), the member at +0xBC, a pointer at +0xC8
// cleared in the body, and two more critical sections at +0x100 and +0x140. The destructor (82DA9538, out of line)
// destroys the two arrays and the listeners. The bytes at +0xCC..+0x100 and +0x11C..+0x140 are not touched by
// either and are unknown; so is the class of the member at +0xBC (its constructor, 82D808C0, a C unit, stores 70 in
// its first word; it keeps the earlier units' name hkpMtUnknownBC). The member names at +0x50..+0xA0, +0x100 and
// +0x140 follow Havok's header. The vtable (??_7hkpMultiThreadedSimulation@@6B@, 21 slots) overrides
// hkpContinuousSimulation's functions, which no header declares yet.
#ifndef HAVOK_HKPMULTITHREADEDSIMULATION_H
#define HAVOK_HKPMULTITHREADEDSIMULATION_H

#include "havok/hkBase.h"
#include "havok/hkCriticalSection.h"
#include "havok/hkpBroadPhaseListener.h"
#include "havok/hkpContinuousSimulation.h"

class hkpTypedBroadPhaseHandlePair;
class hkpWorld;

// The member at +0xBC of hkpMultiThreadedSimulation, 0xC bytes; its real class is not known. Its constructor is out
// of line and keeps its fn_ name (fn_82D808C0, a C unit).
struct hkpMtUnknownBC;
extern "C" void fn_82D808C0(hkpMtUnknownBC *self);
struct hkpMtUnknownBC {
    HK_FORCE_INLINE hkpMtUnknownBC() { fn_82D808C0(this); }
    int m_value;   // +0x0 = 70
    int m_pad[2];
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
    hkUint8 m_padCC[0x100 - 0xCC];                                       // +0xCC, unknown
    hkCriticalSection m_toiQueueCriticalSection;                         // +0x100
    hkUint8 m_pad11C[0x140 - 0x11C];                                     // +0x11C, unknown
    hkCriticalSection m_phantomCriticalSection;                          // +0x140
};

#endif
