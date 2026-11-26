// hkpDefaultWorldMemoryWatchDog::hkpDefaultWorldMemoryWatchDog(hkInt32) (Physics/Dynamics/World/Memory/Default/hkpDefaultWorldMemoryWatchDog.cpp).
#include "havok/hkBase.h"
#include "havok/hkpDefaultWorldMemoryWatchDog.h"

hkpDefaultWorldMemoryWatchDog::hkpDefaultWorldMemoryWatchDog(hkInt32 freeHeapMemoryRequested)
{
    m_freeHeapMemoryRequested = freeHeapMemoryRequested;
}
