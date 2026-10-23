// hkpBinaryAction scalar deleting destructor ??_GhkpBinaryAction@@UAAPAXI@Z: calls the out-of-line ~hkpBinaryAction below (fn_830B31D0, ??1hkpBinaryAction@@UAA@XZ), then frees through the class allocator. The deleting destructor is emitted with the vtable.
// hkpBinaryAction::~hkpBinaryAction() (user-written): releases the bodies; then ~hkpAction (user-written) destroys m_name.
// Physics base classes, layouts from the hkClass reflection data and the
// constructors/destructors.
//
// own hkStringPtr: the shared havok/hkStringPtr.h (skipped through its
// include guard) lacks the out-of-line default constructor fn_82CED2F8.
#define HAVOK_HKSTRINGPTR_H
#include "havok/hkBase.h"

class hkStringPtr;
extern "C" {
void fn_82CED2F8(hkStringPtr *self);                              // hkStringPtr::hkStringPtr()
void fn_82CED308(hkStringPtr *self, hkFinishLoadedObjectFlag f);  // hkStringPtr::hkStringPtr(hkFinishLoadedObjectFlag)
void fn_82CED5B8(hkStringPtr *self);                              // hkStringPtr::~hkStringPtr()
}

class hkStringPtr {
public:
    HK_FORCE_INLINE hkStringPtr() { fn_82CED2F8(this); }
    HK_FORCE_INLINE hkStringPtr(hkFinishLoadedObjectFlag f) { fn_82CED308(this, f); }
    HK_FORCE_INLINE ~hkStringPtr() { fn_82CED5B8(this); }
    const char *m_stringAndFlag;
};

// hkMultiThreadCheck (Common/Base/DebugUtil/MultiThreadCheck, 8 bytes).
struct hkMultiThreadCheck;
extern "C" void fn_82CEFB20(hkMultiThreadCheck *self);   // hkMultiThreadCheck::disableChecks (m_threadId = 0xFFFFFFD1)

struct hkMultiThreadCheck {
    enum { UNMARKED = 0xFFFFFFD1 };
    HK_FORCE_INLINE hkMultiThreadCheck()
    {
        m_markCount = 0;
        m_threadId = hkUint32(UNMARKED);
    }
    HK_FORCE_INLINE void disableChecks() { fn_82CEFB20(this); }

    hkUint32 m_threadId;      // +0x0
    hkInt16 m_markCount;      // +0x4
    hkUint16 m_markBitStack;  // +0x6
};

// hkCriticalSection (0x1C bytes on Xbox 360: a CRITICAL_SECTION); its
// destructor generates no code here.
class hkCriticalSection {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE, hkCriticalSection);
    hkUint32 m_section[7];
};

// hkpBroadPhase (Physics/Internal/Collide/BroadPhase/hkpBroadPhase.h)
class hkpBroadPhase : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBroadPhase();
    virtual ~hkpBroadPhase();

    hkMultiThreadCheck m_multiThreadCheck;   // +0x8
    hkCriticalSection *m_criticalSection;    // +0x10
};

// hkpAction (0x18 bytes) and hkpBinaryAction (0x20 bytes)
class hkpWorld;
class hkpSimulationIsland;
class hkpEntity : public hkReferencedObject {};

class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    HK_FORCE_INLINE hkpAction(hkUlong userData = 0) : m_world(HK_NULL), m_island(HK_NULL), m_userData(userData) {}
    HK_FORCE_INLINE virtual ~hkpAction() {}

    hkpWorld *m_world;               // +0x8
    hkpSimulationIsland *m_island;   // +0xC
    hkUlong m_userData;              // +0x10
    hkStringPtr m_name;              // +0x14
};

class hkpBinaryAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpBinaryAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData = 0);
    virtual ~hkpBinaryAction();

    hkpEntity *m_entityA;   // +0x18
    hkpEntity *m_entityB;   // +0x1C
};

hkpBinaryAction::~hkpBinaryAction()
{
    if (m_entityA != HK_NULL) {
        m_entityA->removeReference();
        m_entityA = HK_NULL;
    }
    if (m_entityB != HK_NULL) {
        m_entityB->removeReference();
        m_entityB = HK_NULL;
    }
}
