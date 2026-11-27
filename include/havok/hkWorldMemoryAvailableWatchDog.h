// hkWorldMemoryAvailableWatchDog (Physics/Dynamics/World/Memory/hkpWorldMemoryAvailableWatchDog.h), 0x8 bytes: the
// interface a world asks to free memory. It has no vtable of its own; hkpDefaultWorldMemoryWatchDog's
// (??_7hkpDefaultWorldMemoryWatchDog@@6B@) places its three functions after hkReferencedObject's:
// getAmountOfFreeHeapMemoryRequested (82D9D0A8 returns the subclass's member at +0x8),
// freeHeapMemoryTillRequestedAmountIsAvailable (82D9D1A8) and a third (82D9D0D0) whose name is not known: it
// takes a simulation island and removes the island's first entity from the island's world (it reads m_world at
// +0x18 and m_entities[0] through +0x48, and calls fn_82D81240, which 82D9D100 also uses to remove entities).
// That is not what Havok's third function, reduceConstraintsInIsland(const MemUsageInfo &, int), is given,
// so the slot keeps its offset as a name. The first two names follow Havok's header.
#ifndef HAVOK_HKWORLDMEMORYAVAILABLEWATCHDOG_H
#define HAVOK_HKWORLDMEMORYAVAILABLEWATCHDOG_H

#include "havok/hkBase.h"

class hkpSimulationIsland;
class hkpWorld;

class hkWorldMemoryAvailableWatchDog : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkWorldMemoryAvailableWatchDog() {}
    hkWorldMemoryAvailableWatchDog(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual hkInt32 getAmountOfFreeHeapMemoryRequested() = 0;                 // +0xC
    virtual void freeHeapMemoryTillRequestedAmountIsAvailable(hkpWorld *world) = 0;   // +0x10
    virtual void slot14(hkpSimulationIsland *island) = 0;                     // +0x14
};

#endif
