// getVtablehkpConstraintInstance, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpConstraintInstance (static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
// hkpConstraintInstance (Physics/Dynamics/Constraint/hkpConstraintInstance.h) and hkpConstraintChainInstance
// (Chain/hkpConstraintChainInstance.h). The finish constructor default-constructs the (unserialized) listener
// array, an hkSmallArray {m_data, hkUint16 m_size, hkUint16 m_capacityAndFlags = 0x8000} at +0x20, finishes
// m_name (+0x28, out of line: fn_82CED308) and sets m_uid (+0x34) to 0xfffffff0.
#include "havok/hkBase.h"
#include "havok/hkpConstraintInstance.h"

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
