// hkpBreakOffPartsUtil::hkpBreakOffPartsUtil(hkpWorld *, hkpBreakOffPartsListener *) (hkpBreakOffPartsUtil.cpp). The
// critical section's constructor keeps its fn_ name (fn_82CEFBD0), so its new expression is written out.
#include "havok/hkBase.h"
#include "havok/hkpEntityListener.h"
#include "havok/hkpConstraintListener.h"
#include "havok/hkpWorldDeletionListener.h"
#include "havok/hkpWorld.h"
#include "havok/hkpContactImpulseLimitBreachedListener.h"
#include "havok/hkCriticalSection.h"

class hkpBreakOffPartsListener;

// Physics/Utilities/Destruction/BreakOffParts/hkpBreakOffPartsUtil.h. RTTI: hkReferencedObject, then the
// listeners at +0x8 (contact impulse limit), +0xC (entity), +0x10 (world deletion), +0x14 (constraint).
class hkpBreakOffPartsUtil : public hkReferencedObject,
                             public hkpContactImpulseLimitBreachedListener,
                             public hkpEntityListener,
                             public hkpWorldDeletionListener,
                             public hkpConstraintListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpBreakOffPartsUtil(hkpWorld *world, hkpBreakOffPartsListener *breakOffPartsListener);
    virtual ~hkpBreakOffPartsUtil();
    virtual void contactImpulseLimitBreachedCallback(const hkpContactImpulseLimitBreachedListenerInfo *breachedContacts,
                                                     int numBreachedContacts);
    virtual void worldDeletedCallback(hkpWorld *world);

    hkpWorld *m_world;                                   // +0x18
    hkCriticalSection *m_criticalSection;                // +0x1C
    hkpBreakOffPartsListener *m_breakOffPartsListener;   // +0x20
};

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
