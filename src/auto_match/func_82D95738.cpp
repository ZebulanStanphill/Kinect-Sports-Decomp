// hkpUnaryAction scalar deleting destructor, with the destructor inlined. The function at the end only makes the compiler emit the vtable, and with it this function.
// hkStringPtr is declared here rather than taken from the shared havok/hkStringPtr.h (skipped through its
// include guard), which lacks the default constructor: it is out of line, fn_82CED2F8 (it stores a pointer
// read from a global, lbl_8323B430), and keeps its fn_ name (Matching C units call it), like the finish
// constructor fn_82CED308, the const char * constructor fn_82CED488 and the destructor fn_82CED5B8.
#define HAVOK_HKSTRINGPTR_H
#include "havok/hkBase.h"

class hkStringPtr;
extern "C" {
void fn_82CED2F8(hkStringPtr *self);                              // hkStringPtr::hkStringPtr()
void fn_82CED308(hkStringPtr *self, hkFinishLoadedObjectFlag f);  // hkStringPtr::hkStringPtr(hkFinishLoadedObjectFlag)
void fn_82CED5B8(hkStringPtr *self);                              // hkStringPtr::~hkStringPtr()
void fn_82CED488(hkStringPtr *self, const char *string);          // hkStringPtr::hkStringPtr(const char *)
}

class hkStringPtr {
public:
    enum { OWNED_FLAG = 0x1 };
    HK_FORCE_INLINE hkStringPtr() { fn_82CED2F8(this); }
    HK_FORCE_INLINE hkStringPtr(const char *string) { fn_82CED488(this, string); }
    HK_FORCE_INLINE hkStringPtr(hkFinishLoadedObjectFlag f) { fn_82CED308(this, f); }
    HK_FORCE_INLINE ~hkStringPtr() { fn_82CED5B8(this); }

    const char *m_stringAndFlag;
};

class hkpWorld;
class hkpSimulationIsland;
class hkpEntity : public hkReferencedObject {
};

// hkpAction (Physics/Dynamics/Action/hkpAction.h): +0x8 m_world, +0xC m_island, +0x10 m_userData,
// +0x14 m_name. Its destructor is user-written and inline (it stores hkpAction's vtable).
class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpAction(hkUlong userData = 0) : m_world(HK_NULL), m_island(HK_NULL), m_userData(userData) {}
    virtual ~hkpAction() {}

    hkpWorld *m_world;               // +0x8
    hkpSimulationIsland *m_island;   // +0xC
    hkUlong m_userData;              // +0x10
    hkStringPtr m_name;              // +0x14
};

// hkpUnaryAction (Physics/Dynamics/Action/hkpUnaryAction.h): hkpAction + hkpEntity *m_entity (+0x18).
// The destructor is out of line in the game as fn_82D95638, which keeps its fn_ name (a Matching unit,
// func_8260B058, calls it); it is defined inline here so that units can expand it.
class hkpUnaryAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpUnaryAction(hkpEntity *entity = HK_NULL, hkUlong userData = 0);
    HK_FORCE_INLINE virtual ~hkpUnaryAction()
    {
        if (m_entity) {
            m_entity->removeReference();
            m_entity = HK_NULL;
        }
    }

    hkpEntity *m_entity;   // +0x18
};

void emitVtable_82D95738(hkpUnaryAction *p) { p->hkpUnaryAction::~hkpUnaryAction(); }
