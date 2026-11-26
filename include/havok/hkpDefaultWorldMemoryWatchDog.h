// hkpDefaultWorldMemoryWatchDog (Physics/Dynamics/World/Memory/Default/hkpDefaultWorldMemoryWatchDog.h), 0xC
// bytes: the watch dog that asks for a fixed amount of free heap memory. The size and the member come from the
// game's hkClass (initialiser 83130410, members lbl_8213ABA8: "freeHeapMemoryRequested", an int at +0x8). The
// constructor is out of line (82D9D0B0, ??0...@H@Z); the destructor is implicit (slot 0 of
// ??_7hkpDefaultWorldMemoryWatchDog@@6B@ is a deleting destructor folded with hkpShape's). The vtable places the
// overrides of hkWorldMemoryAvailableWatchDog's three functions: 82D9D0A8, 82D9D1A8, 82D9D0D0 (slot14, whose
// name and parameters are not known; see that header). The finish constructor is inline (82D7ECD0, 82D7ECE8).
#ifndef HAVOK_HKPDEFAULTWORLDMEMORYWATCHDOG_H
#define HAVOK_HKPDEFAULTWORLDMEMORYWATCHDOG_H

#include "havok/hkBase.h"
#include "havok/hkWorldMemoryAvailableWatchDog.h"

class hkpDefaultWorldMemoryWatchDog : public hkWorldMemoryAvailableWatchDog {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpDefaultWorldMemoryWatchDog(hkInt32 freeHeapMemoryRequested);
    hkpDefaultWorldMemoryWatchDog(hkFinishLoadedObjectFlag flag) : hkWorldMemoryAvailableWatchDog(flag) {}
    virtual hkInt32 getAmountOfFreeHeapMemoryRequested();                          // +0xC
    virtual void freeHeapMemoryTillRequestedAmountIsAvailable(hkpWorld *world);    // +0x10
    virtual void slot14(void *arg);                                                // +0x14

    hkInt32 m_freeHeapMemoryRequested;   // +0x8
};

#endif
