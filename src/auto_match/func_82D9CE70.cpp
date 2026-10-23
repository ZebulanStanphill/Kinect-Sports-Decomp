// hkpConstraintChainInstance::hkpConstraintChainInstance(hkpConstraintChainData *) (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstance.cpp): the base and the action's constructors are out of line.
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

// hkEnum (Common/Base/Types/hkBaseTypes.h): an enum stored in a smaller integer type.
template <typename ENUM, typename STORAGE>
class hkEnum {
public:
    hkEnum() {}
    hkEnum(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    operator ENUM() const { return static_cast<ENUM>(m_storage); }
    void operator=(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    STORAGE m_storage;
};

// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
void fn_82CE3F80(void);   // hkReferencedObject::lockAll()
void fn_82CE3FE8(void);   // hkReferencedObject::unlockAll()
}

template <typename TYPE>
HK_FORCE_INLINE void HK_CALL hkDeallocateChunk(TYPE *ptr, int numberOfObjects, HK_MEMORY_CLASS cl)
{
    hkMemoryRouter::getInstance().heap().blockFree(static_cast<void *>(ptr), numberOfObjects * int(sizeof(TYPE)));
}

// hkSmallArray (Common/Base/Container/Array/hkSmallArray.h): T *m_data; hkUint16 m_size;
// hkUint16 m_capacityAndFlags (capacity in the low 14 bits, DONT_DEALLOCATE_FLAG 0x8000).
template <typename T>
class hkSmallArray {
public:
    enum { CAPACITY_MASK = 0x3FFF, DONT_DEALLOCATE_FLAG = 0x8000 };
    HK_FORCE_INLINE hkSmallArray() : m_data(HK_NULL), m_size(0), m_capacityAndFlags(DONT_DEALLOCATE_FLAG) {}
    HK_FORCE_INLINE ~hkSmallArray()
    {
        if ((m_capacityAndFlags & DONT_DEALLOCATE_FLAG) == 0)
            hkDeallocateChunk<T>(m_data, m_capacityAndFlags & CAPACITY_MASK, HK_MEMORY_CLASS_ARRAY);
    }

    T *m_data;
    hkUint16 m_size;
    hkUint16 m_capacityAndFlags;
};

#ifndef C2_HKPENTITY
#define C2_HKPENTITY
class hkpEntity : public hkReferencedObject {
};
#endif
class hkpConstraintData : public hkReferencedObject {
};
class hkpConstraintOwner;
class hkpConstraintListener;
struct hkpConstraintInternal;

struct hkpConstraintAtom {
    enum { FIRST_MODIFIER_TYPE = 0x17 };
    bool isModifierType() const { return m_type >= FIRST_MODIFIER_TYPE; }
    hkUint16 m_type;   // +0x0
};

// hkpModifierConstraintAtom (16-byte aligned in Havok): +0x10 m_modifierAtomSize, +0x12 m_childSize,
// +0x14 m_child.
struct hkpModifierConstraintAtom : public hkpConstraintAtom {
    char m_pad[0x10 - 2];
    hkUint16 m_modifierAtomSize;   // +0x10
    hkUint16 m_childSize;          // +0x12
    hkpConstraintAtom *m_child;    // +0x14
};

// hkpConstraintInstance (Physics/Dynamics/Constraint/hkpConstraintInstance.h).
class hkpConstraintInstance : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    enum ConstraintPriority {
        PRIORITY_INVALID,
        PRIORITY_PSI,
        PRIORITY_SIMPLIFIED_TOI_UNUSED,
        PRIORITY_TOI,
        PRIORITY_TOI_HIGHER,
        PRIORITY_TOI_FORCED,
        NUM_PRIORITIES
    };
    enum OnDestructionRemapInfo {
        ON_DESTRUCTION_REMAP = 0,
        ON_DESTRUCTION_REMOVE = 1,
        ON_DESTRUCTION_RESET_REMOVE = 2
    };
    hkpConstraintInstance(ConstraintPriority priority);
    // Out of line in the game as fn_82D962A8, which keeps its fn_ name (a Matching unit calls it); defined
    // inline here so that a unit can expand it.
    HK_FORCE_INLINE hkpConstraintInstance(hkpEntity *entityA, hkpEntity *entityB, hkpConstraintData *data,
                                          ConstraintPriority priority)
        : m_owner(HK_NULL), m_data(data), m_priority(priority), m_wantRuntime(true),
          m_destructionRemapInfo(ON_DESTRUCTION_REMAP), m_userData(0), m_internal(HK_NULL), m_uid(0xfffffff0)
    {
        m_entities[0] = entityA;
        m_entities[1] = entityB;
        m_constraintModifiers = HK_NULL;
        fn_82CE3F80();
        m_entities[0]->addReference();
        if (m_entities[1])
            m_entities[1]->addReference();
        m_data->addReference();
        fn_82CE3FE8();
    }
    virtual ~hkpConstraintInstance();

    hkpConstraintOwner *m_owner;                          // +0x8
    hkpConstraintData *m_data;                            // +0xC
    hkpModifierConstraintAtom *m_constraintModifiers;     // +0x10
    hkpEntity *m_entities[2];                             // +0x14
    hkEnum<ConstraintPriority, hkUint8> m_priority;       // +0x1C
    hkBool m_wantRuntime;                                 // +0x1D
    hkEnum<OnDestructionRemapInfo, hkUint8> m_destructionRemapInfo;   // +0x1E
    hkSmallArray<hkpConstraintListener *> m_listeners;    // +0x20
    hkStringPtr m_name;                                   // +0x28
    hkUlong m_userData;                                   // +0x2C
    hkpConstraintInternal *m_internal;                    // +0x30
    hkUint32 m_uid;                                       // +0x34
};

class hkpWorld;
class hkpSimulationIsland;
#ifndef C2_HKPENTITY
#define C2_HKPENTITY
class hkpEntity : public hkReferencedObject {
};
#endif

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

class hkpConstraintChainData : public hkpConstraintData {
};
class hkpConstraintChainInstanceAction;

// hkpConstraintChainInstance (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstance.h).
class hkpConstraintChainInstance : public hkpConstraintInstance {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintChainInstance(hkpConstraintChainData *data);
    virtual ~hkpConstraintChainInstance();

    hkArray<hkpEntity *> m_chainedEntities;      // +0x38
    hkpConstraintChainInstanceAction *m_action;  // +0x44
};

// hkpConstraintChainInstanceAction (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstanceAction.h).
class hkpConstraintChainInstanceAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintChainInstanceAction(hkpConstraintChainInstance *constraintInstance);

    hkpConstraintChainInstance *m_constraintInstance;   // +0x18
};

hkpConstraintChainInstance::hkpConstraintChainInstance(hkpConstraintChainData *data) : hkpConstraintInstance(PRIORITY_PSI)
{
    m_data = data;
    data->addReference();
    m_entities[0] = HK_NULL;
    m_entities[1] = HK_NULL;
    m_action = new hkpConstraintChainInstanceAction(this);
}
