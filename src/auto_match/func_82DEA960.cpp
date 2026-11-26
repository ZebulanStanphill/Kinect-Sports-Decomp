// hkpBreakOffPartsUtil::~hkpBreakOffPartsUtil (hkpBreakOffPartsUtil.cpp).
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"
#include "havok/hkCriticalSection.h"
#include "havok/hkpBreakOffPartsUtil.h"

hkpBreakOffPartsUtil::~hkpBreakOffPartsUtil()
{
    if (m_world) {
        m_world->removeContactImpulseLimitBreachedListener(this);
        m_world->removeConstraintListener(this);
        m_world->removeWorldDeletionListener(this);
    }
    delete m_criticalSection;
}
