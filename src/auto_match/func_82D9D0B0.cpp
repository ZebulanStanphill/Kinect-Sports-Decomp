// hkpDefaultWorldMemoryWatchDog::hkpDefaultWorldMemoryWatchDog(hkInt32) (Physics/Dynamics/World/Memory/Default/hkpDefaultWorldMemoryWatchDog.cpp).
#include "havok/hkBase.h"
#include "havok/hkWorldMemoryAvailableWatchDog.h"

class hkpDefaultWorldMemoryWatchDog : public hkWorldMemoryAvailableWatchDog {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpDefaultWorldMemoryWatchDog(hkInt32 freeHeapMemoryRequested);
    virtual hkInt32 getAmountOfFreeHeapMemoryRequested();
    virtual void freeHeapMemoryTillRequestedAmountIsAvailable(hkpWorld *world);
    virtual void slot14(void *arg);

    hkInt32 m_freeHeapMemoryRequested;   // +0x8
};

hkpDefaultWorldMemoryWatchDog::hkpDefaultWorldMemoryWatchDog(hkInt32 freeHeapMemoryRequested)
{
    m_freeHeapMemoryRequested = freeHeapMemoryRequested;
}
