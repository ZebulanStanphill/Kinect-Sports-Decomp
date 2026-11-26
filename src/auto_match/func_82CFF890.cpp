// hkStatisticsCollector::hkStatisticsCollector(const hkVtableClassRegistry *) (hkStatisticsCollector.cpp).
#include "havok/hkBase.h"
#include "havok/hkStatisticsCollector.h"

hkStatisticsCollector::hkStatisticsCollector(const hkVtableClassRegistry *vtableClassRegistry)
    : m_vtableClassRegistry(vtableClassRegistry), m_flag(false)
{
}
