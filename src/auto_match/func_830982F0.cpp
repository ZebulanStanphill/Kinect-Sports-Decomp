// hkCpuWorldRayCastCollector::hkCpuWorldRayCastCollector(). The class derives from the collector
// interfaces hkpBroadPhaseCastCollector, hkKdTreeCastCollector and the four
// hkAabbTreeQueryUtils<...>::Collector interfaces (RTTI order and offsets; sizeof 0x90, see
// func_830990F0.cpp). The base constructors' vtable stores stay, except the first base's.
// Members: an hkpShapeRayCastInput at +0x40 (its constructor clears m_filterInfo and
// m_rayShapeCollectionFilter), the early-out fraction (1.0f) at +0x1c, a flag at +0x20 and a
// pointer at +0x70, the last three set in the body.
// The source used the literal 1.0f.
#include "havok/hkCpuWorldRayCastCollector.h"

hkCpuWorldRayCastCollector::hkCpuWorldRayCastCollector()
{
    m_earlyOutHitFraction = 1.0f;
    m_result = HK_NULL;
    m_hit = false;
}
