// hkStatisticsCollector::~hkStatisticsCollector (Common/Base/Monitor/... hkStatisticsCollector.cpp): clears the pointer at +0x8; the vtable store on entry is dead.
#include "havok/hkBase.h"
#include "havok/hkStatisticsCollector.h"

hkStatisticsCollector::~hkStatisticsCollector()
{
    m_unknown8 = HK_NULL;
}
