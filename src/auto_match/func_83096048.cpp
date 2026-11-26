#include "havok/hkBase.h"
#include "havok/hkpBroadPhase.h"
#include "havok/hkCriticalSection.h"

hkpBroadPhase::~hkpBroadPhase()
{
    if (m_criticalSection) {
        delete m_criticalSection;
        m_criticalSection = HK_NULL;
    }
}
