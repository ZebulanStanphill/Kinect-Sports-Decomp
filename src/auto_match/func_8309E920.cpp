// hkKdTreeCpuBroadphaseBundleCastCollector::hkKdTreeCpuBroadphaseBundleCastCollector(): clears seven words.
#include "havok/hkKdTreeCpuBroadphaseBundleCastCollector.h"

hkKdTreeCpuBroadphaseBundleCastCollector::hkKdTreeCpuBroadphaseBundleCastCollector()
    : m_bundle(HK_NULL), m_filterInfo(0), m_unknown74(0)
{
    m_hits[0] = 0;
    m_hits[1] = 0;
    m_hits[2] = 0;
    m_hits[3] = 0;
}
