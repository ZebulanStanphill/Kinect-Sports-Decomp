// hkpBreakOffPartsUtil::hkpBreakOffPartsUtil(hkpWorld *, hkpBreakOffPartsListener *) (hkpBreakOffPartsUtil.cpp).
#include "havok/hkBase.h"
#include "havok/hkpWorld.h"
#include "havok/hkCriticalSection.h"
#include "havok/hkpBreakOffPartsUtil.h"

hkpBreakOffPartsUtil::hkpBreakOffPartsUtil(hkpWorld *world, hkpBreakOffPartsListener *breakOffPartsListener)
    : m_world(world), m_breakOffPartsListener(breakOffPartsListener)
{
    addReference();
    world->addContactImpulseLimitBreachedListener(this);
    world->addWorldDeletionListener(this);
    world->addConstraintListener(this);
    m_criticalSection = new hkCriticalSection(1);
}
