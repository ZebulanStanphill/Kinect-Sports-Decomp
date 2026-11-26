// hkpBreakOffPartsUtil scalar deleting destructor. It keeps its fn_ name because the adjustor thunks for the
// listener subobjects (fn_82DEC388..fn_82DEC3A0, subi r3, r3, N; b fn_82DEC3A8) are plain C; so it is written
// out instead of being compiler-generated (??_G).
#include "havok/hkBase.h"
#include "havok/hkpEntityListener.h"
#include "havok/hkpConstraintListener.h"
#include "havok/hkpWorldDeletionListener.h"
#include "havok/hkpWorld.h"
#include "havok/hkpContactImpulseLimitBreachedListener.h"

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

extern "C" hkpBreakOffPartsUtil *fn_82DEC3A8(hkpBreakOffPartsUtil *self, unsigned int flags)
{
    self->hkpBreakOffPartsUtil::~hkpBreakOffPartsUtil();
    if (flags & 1)
        hkpBreakOffPartsUtil::operator delete(self);
    return self;
}
