// hkpBreakOffPartsUtil::hkpBreakOffPartsUtil(hkpWorld *, hkpBreakOffPartsListener *) (hkpBreakOffPartsUtil.cpp). The
// critical section's constructor keeps its fn_ name (fn_82CEFBD0), so its new expression is written out.
#include "havok/hkBase.h"
class hkpEntity;
class hkpConstraintInstance;
struct hkpConstraintBrokenEvent;
struct hkpConstraintRepairedEvent;

extern "C" void fn_8265CA20(void *p);   // global operator delete

// Listener interfaces with no base (RTTI). Vtables: the deleting destructor, then five callbacks whose default
// implementations are empty (folded into fn_82BA02A8; hkpEntityListener's slot 3 is fn_82DB2F50).
class hkpConstraintListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpConstraintListener() {}
    virtual void constraintAddedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintRemovedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintDeletedCallback(hkpConstraintInstance *constraint) {}
    virtual void constraintBreakingCallback(const hkpConstraintBrokenEvent &event) {}
    virtual void constraintRepairedCallback(const hkpConstraintRepairedEvent &event) {}
};

class hkpEntityListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpEntityListener() {}
    virtual void entityAddedCallback(hkpEntity *entity) {}
    virtual void entityRemovedCallback(hkpEntity *entity) {}
    virtual void entityShapeSetCallback(hkpEntity *entity);
    virtual void entitySetMotionTypeCallback(hkpEntity *entity) {}
    virtual void entityDeletedCallback(hkpEntity *entity) {}
};

class hkpWorld;
struct hkpContactImpulseLimitBreachedListenerInfo;

// Vtable: the deleting destructor (fn_82DEA6C0), then the callback (pure).
class hkpContactImpulseLimitBreachedListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpContactImpulseLimitBreachedListener() {}
    virtual void contactImpulseLimitBreachedCallback(const hkpContactImpulseLimitBreachedListenerInfo *breachedContacts,
                                                     int numBreachedContacts) = 0;
};

// Vtable: the deleting destructor (fn_82D8DA38), worldDeletedCallback (pure), worldRemovedCallback (empty).
class hkpWorldDeletionListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpWorldDeletionListener() {}
    virtual void worldDeletedCallback(hkpWorld *world) = 0;
    virtual void worldRemovedCallback(hkpWorld *world) {}
};

extern "C" {
void fn_82D84258(hkpWorld *world, hkpContactImpulseLimitBreachedListener *l);      // hkpWorld::addContactImpulseLimitBreachedListener
void fn_82D841E0(hkpWorld *world, hkpWorldDeletionListener *l);                    // hkpWorld::addWorldDeletionListener
void fn_82D83D30(hkpWorld *world, hkpConstraintListener *l);                       // hkpWorld::addConstraintListener
void fn_82D816D8(hkpWorld *world, hkpContactImpulseLimitBreachedListener *l);      // hkpWorld::removeContactImpulseLimitBreachedListener
void fn_82D813C0(hkpWorld *world, hkpConstraintListener *l);                       // hkpWorld::removeConstraintListener
void fn_82D81690(hkpWorld *world, hkpWorldDeletionListener *l);                    // hkpWorld::removeWorldDeletionListener
}

// Only the listener registration hkpBreakOffPartsUtil uses (all out of line).
class hkpWorld {
public:
    void addContactImpulseLimitBreachedListener(hkpContactImpulseLimitBreachedListener *l) { fn_82D84258(this, l); }
    void addWorldDeletionListener(hkpWorldDeletionListener *l) { fn_82D841E0(this, l); }
    void addConstraintListener(hkpConstraintListener *l) { fn_82D83D30(this, l); }
    void removeContactImpulseLimitBreachedListener(hkpContactImpulseLimitBreachedListener *l) { fn_82D816D8(this, l); }
    void removeConstraintListener(hkpConstraintListener *l) { fn_82D813C0(this, l); }
    void removeWorldDeletionListener(hkpWorldDeletionListener *l) { fn_82D81690(this, l); }
};

class hkCriticalSection;
extern "C" hkCriticalSection *fn_82CEFBD0(void *self, int spinCount);   // hkCriticalSection::hkCriticalSection(int)

// Common/Base/Thread/CriticalSection/hkCriticalSection.h (0x1C bytes, non-virtual class allocator; its destructor
// is inline and empty on this platform, so delete still checks for null).
class hkCriticalSection {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE, hkCriticalSection);
    hkCriticalSection(int spinCount = 0);
    ~hkCriticalSection() {}
    char m_section[0x1C];
};

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
