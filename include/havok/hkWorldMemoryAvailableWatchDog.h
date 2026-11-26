// hkWorldMemoryAvailableWatchDog (Physics/Dynamics/World/Memory/hkpWorldMemoryAvailableWatchDog.h), 0x8 bytes: the
// interface a world asks to free memory. It has no vtable of its own; hkpDefaultWorldMemoryWatchDog's
// (??_7hkpDefaultWorldMemoryWatchDog@@6B@) places its three functions after hkReferencedObject's:
// getAmountOfFreeHeapMemoryRequested (82D9D0A8 returns the subclass's member at +0x8),
// freeHeapMemoryTillRequestedAmountIsAvailable (82D9D1A8) and a third (82D9D0D0) whose name and arguments are not
// known. The first two names follow Havok's header.
#ifndef HAVOK_HKWORLDMEMORYAVAILABLEWATCHDOG_H
#define HAVOK_HKWORLDMEMORYAVAILABLEWATCHDOG_H

#include "havok/hkBase.h"

class hkpWorld;

class hkWorldMemoryAvailableWatchDog : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkWorldMemoryAvailableWatchDog() {}
    hkWorldMemoryAvailableWatchDog(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual hkInt32 getAmountOfFreeHeapMemoryRequested() = 0;                 // +0xC
    virtual void freeHeapMemoryTillRequestedAmountIsAvailable(hkpWorld *world) = 0;   // +0x10
    virtual void slot14(void *arg) = 0;                                       // +0x14
};

#endif
