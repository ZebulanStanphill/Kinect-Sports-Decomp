// getVtablehkpConstraintInstance, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpConstraintInstance (static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
// hkpConstraintInstance (Physics/Dynamics/Constraint/hkpConstraintInstance.h) and hkpConstraintChainInstance
// (Chain/hkpConstraintChainInstance.h). The finish constructor default-constructs the (unserialized) listener
// array, an hkSmallArray {m_data, hkUint16 m_size, hkUint16 m_capacityAndFlags = 0x8000} at +0x20, finishes
// m_name (+0x28, out of line: fn_82CED308) and sets m_uid (+0x34) to 0xfffffff0.
#include "havok/hkBase.h"

class hkpConstraintOwner;
class hkpConstraintData;
class hkpModifierConstraintAtom;
class hkpEntity;
class hkpConstraintListener;
struct hkConstraintInternal;

template <typename T>
class hkSmallArray {
public:
    enum { DONT_DEALLOCATE_FLAG = 0x8000 };
    HK_FORCE_INLINE hkSmallArray() : m_data(HK_NULL), m_size(0), m_capacityAndFlags(DONT_DEALLOCATE_FLAG) {}

    T *m_data;
    hkUint16 m_size;
    hkUint16 m_capacityAndFlags;
};

class hkpConstraintInstance : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintInstance(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_name(f), m_uid(0xfffffff0) {}

    hkpConstraintOwner *m_owner;                         // +0x8
    hkpConstraintData *m_data;                           // +0xC
    hkpModifierConstraintAtom *m_constraintModifiers;    // +0x10
    hkpEntity *m_entities[2];                            // +0x14
    hkUint8 m_priority;                                  // +0x1C
    hkBool m_wantRuntime;                                // +0x1D
    hkUint8 m_destructionRemapInfo;                      // +0x1E
    hkSmallArray<hkpConstraintListener *> m_listeners;   // +0x20
    hkStringPtr m_name;                                  // +0x28
    hkUlong m_userData;                                  // +0x2C
    hkConstraintInternal *m_internal;                    // +0x30
    hkUint32 m_uid;                                      // +0x34
};

class hkpConstraintChainInstanceAction;

class hkpConstraintChainInstance : public hkpConstraintInstance {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintChainInstance(hkFinishLoadedObjectFlag f);

    hkArray<hkpEntity *> m_chainedEntities;        // +0x38
    hkpConstraintChainInstanceAction *m_action;    // +0x44
};

const void *HK_CALL getVtablehkpConstraintInstance()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpConstraintInstance)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpConstraintInstance(f);
    return u.ptr;
}
