// hkpBreakOffPartsUtil::hkpBreakOffPartsUtil(hkpWorld *, hkpBreakOffPartsListener *) (hkpBreakOffPartsUtil.cpp). The
// critical section's constructor keeps its fn_ name (fn_82CEFBD0), so its new expression is written out.
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
    void *cs = hkCriticalSection::operator new(sizeof(hkCriticalSection));   // new hkCriticalSection(1)
    m_criticalSection = cs ? fn_82CEFBD0(cs, 1) : HK_NULL;
}
