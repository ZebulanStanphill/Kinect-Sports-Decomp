// hkpDefaultWorldMemoryWatchDog::getAmountOfFreeHeapMemoryRequested (slot +0xC of
// ??_7hkpDefaultWorldMemoryWatchDog@@6B@).
#include "havok/hkpDefaultWorldMemoryWatchDog.h"

hkInt32 hkpDefaultWorldMemoryWatchDog::getAmountOfFreeHeapMemoryRequested()
{
    return m_freeHeapMemoryRequested;
}
