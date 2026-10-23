// hkpDefaultWorldMemoryWatchDog::hkpDefaultWorldMemoryWatchDog(hkInt32) (Physics/Dynamics/World/Memory/Default/hkpDefaultWorldMemoryWatchDog.cpp).
#include "havok/hkBase.h"

class hkWorldMemoryAvailableWatchDog : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
};

class hkpDefaultWorldMemoryWatchDog : public hkWorldMemoryAvailableWatchDog {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpDefaultWorldMemoryWatchDog(hkInt32 freeHeapMemoryRequested);

    hkInt32 m_freeHeapMemoryRequested;   // +0x8
};

hkpDefaultWorldMemoryWatchDog::hkpDefaultWorldMemoryWatchDog(hkInt32 freeHeapMemoryRequested)
{
    m_freeHeapMemoryRequested = freeHeapMemoryRequested;
}
