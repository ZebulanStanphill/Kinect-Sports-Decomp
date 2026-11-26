// finishLoadedObjecthkpConstraintInstance: hkpConstraintInstance's hkTypeInfo finish function (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
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

void HK_CALL finishLoadedObjecthkpConstraintInstance(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConstraintInstance(f);
}
