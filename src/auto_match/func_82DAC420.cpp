// hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr (Physics/Dynamics/Collide/hkpSimpleConstraintContactMgr.cpp): removes the constraint if it still has contact points, detaches it, then the members' destructors (out of line).
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

class hkpWorld;
class hkpRigidBody;
class hkpConstraintInstance;

#ifndef C2_HKDEALLOCATECHUNK
#define C2_HKDEALLOCATECHUNK
template <typename TYPE>
HK_FORCE_INLINE void HK_CALL hkDeallocateChunk(TYPE *ptr, int numberOfObjects, HK_MEMORY_CLASS cl)
{
    hkMemoryRouter::getInstance().heap().blockFree(static_cast<void *>(ptr), numberOfObjects * int(sizeof(TYPE)));
}
#endif

extern "C" {
int fn_82DC73A8(int sizeOfAllAtoms);   // the allocation size of a contact atom block (hkpSimpleContactConstraintAtomUtil)
}

// hkpDynamicsCpIdMgr (Physics/Dynamics/Collide/hkpDynamicsCpIdMgr.h): an hkArray<hkUint8>. Its implicit
// destructor is out of line (fn_82DAC7C8).
class hkpDynamicsCpIdMgr {
public:
    ~hkpDynamicsCpIdMgr();
    hkArray<hkUint8> m_values;   // +0x0
};

struct hkpSimpleContactConstraintAtom {
    hkUint16 m_type;                 // +0x0
    hkUint16 m_sizeOfAllAtoms;       // +0x2
    hkUint16 m_numContactPoints;     // +0x4
    hkUint16 m_numReservedContactPoints;   // +0x6
};

#define C2_HKPCONSTRAINTDATA
class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkUlong m_userData;   // +0x8
};

// hkpSimpleContactConstraintData (Physics/Dynamics/Collide/hkpSimpleContactConstraintData.h), 0x30 bytes.
class hkpSimpleContactConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpSimpleContactConstraintData(hkpConstraintInstance *constraint, hkpRigidBody *bodyA, hkpRigidBody *bodyB);
    virtual ~hkpSimpleContactConstraintData();

    hkpDynamicsCpIdMgr m_idMgrA;                  // +0xC
    void *m_clientData;                           // +0x18
    hkpConstraintInstance *m_constraint;          // +0x1C
    char m_pad20[0x8];                            // +0x20
    hkpSimpleContactConstraintAtom *m_atom;       // +0x28
    hkUint32 m_atomSize;                          // +0x2C
};

// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
void fn_82CE3F80(void);   // hkReferencedObject::lockAll()
void fn_82CE3FE8(void);   // hkReferencedObject::unlockAll()
}

#ifndef C2_HKDEALLOCATECHUNK
#define C2_HKDEALLOCATECHUNK
template <typename TYPE>
HK_FORCE_INLINE void HK_CALL hkDeallocateChunk(TYPE *ptr, int numberOfObjects, HK_MEMORY_CLASS cl)
{
    hkMemoryRouter::getInstance().heap().blockFree(static_cast<void *>(ptr), numberOfObjects * int(sizeof(TYPE)));
}
#endif

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
#ifndef C2_HKPCONSTRAINTDATA
#define C2_HKPCONSTRAINTDATA
class hkpConstraintData : public hkReferencedObject {
};
#endif
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

class hkpContactMgr : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    enum Type {
        TYPE_SIMPLE_CONSTRAINT_CONTACT_MGR,
        TYPE_REPORT_CONTACT_MGR,
        TYPE_CONVEX_LIST_CONTACT_MGR,
        TYPE_NULL_CONTACT_MGR,
        TYPE_USER_CONTACT_MGR,
        TYPE_MAX
    };
    hkpContactMgr(Type type) : m_type(type) {}

    Type m_type;   // +0x8
};

class hkpDynamicsContactMgr : public hkpContactMgr {
public:
    hkpDynamicsContactMgr(Type type) : hkpContactMgr(type) {}
};

// hkpWorldOperationUtil::removeConstraintImmediately(hkpWorld *, hkpConstraintInstance *, FireCallbacks) is
// out of line (fn_82D8EAD8).
extern "C" void fn_82D8EAD8(hkpWorld *world, hkpConstraintInstance *constraint, int fireCallbacks);

// hkpConstraintInstance::setPriority(ConstraintPriority) is out of line (fn_82D958D8).
extern "C" void fn_82D958D8(hkpConstraintInstance *self, hkpConstraintInstance::ConstraintPriority priority);

struct hkpCollisionQualityInfo {
    char m_pad[0x3C];
    hkUint16 m_constraintPriority;   // +0x3C
    char m_pad3e[0x2];
};

// hkpCollisionDispatcher: only the quality tables are used here.
class hkpCollisionDispatcher : public hkReferencedObject {
public:
    typedef hkInt8 CollisionQualityIndex;
    CollisionQualityIndex getCollisionQualityIndex(hkInt8 a, hkInt8 b) { return m_collisionQualityTable[a][b]; }
    hkpCollisionQualityInfo *getCollisionQualityInfo(CollisionQualityIndex index) { return &m_collisionQualityInfo[index]; }

    char m_pad[0x1BB0 - 0x8];
    hkInt8 m_collisionQualityTable[10][10];          // +0x1BB0
    __declspec(align(16)) hkpCollisionQualityInfo m_collisionQualityInfo[8];   // +0x1C20
};

class hkpWorld {
public:
    hkpCollisionDispatcher *getCollisionDispatcher() const { return m_collisionDispatcher; }
    char m_pad[0x80];
    hkpCollisionDispatcher *m_collisionDispatcher;   // +0x80
};

// hkpRigidBody (an hkpEntity): only the collidable's quality type (hkpWorldObject::m_collidable, broad-phase handle) is used.
class hkpRigidBody : public hkpEntity {
public:
    hkInt8 getQualityType() const { return m_objectQualityType; }
    char m_pad[0x2A - 0x8];
    hkInt8 m_objectQualityType;   // +0x2A
};

// hkpSimpleConstraintContactMgr (Physics/Dynamics/Collide/hkpSimpleConstraintContactMgr.h).
class hkpSimpleConstraintContactMgr : public hkpDynamicsContactMgr {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSimpleConstraintContactMgr(hkpWorld *world, hkpRigidBody *bodyA, hkpRigidBody *bodyB);
    virtual ~hkpSimpleConstraintContactMgr();

    hkpWorld *m_world;                                      // +0xC
    hkUint16 m_skipNextNprocessCallbacks;                   // +0x10
    hkUint16 m_reservedContactPoints;                       // +0x12
    hkpSimpleContactConstraintData m_contactConstraintData; // +0x14
    hkpConstraintInstance m_constraint;                     // +0x44
};

hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr()
{
    if (m_contactConstraintData.m_atom->m_numContactPoints)
        fn_82D8EAD8(m_world, &m_constraint, 1);
    m_constraint.m_entities[0] = HK_NULL;
    m_constraint.m_entities[1] = HK_NULL;
    m_constraint.m_data = HK_NULL;
}
