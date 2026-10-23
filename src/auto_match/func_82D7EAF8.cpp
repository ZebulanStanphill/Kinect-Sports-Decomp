// getVtablehkpConstraintChainInstanceAction, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpConstraintChainInstanceAction (static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
// hkpAction (Physics/Dynamics/Action/hkpAction.h) and hkpConstraintChainInstanceAction
// (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstanceAction.h). hkpAction's finish constructor only
// finishes m_name (+0x14, out of line: fn_82CED308).
#include "havok/hkBase.h"

class hkpWorld;
class hkpSimulationIsland;
class hkpConstraintChainInstance;

class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpAction(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_name(f) {}

    hkpWorld *m_world;               // +0x8
    hkpSimulationIsland *m_island;   // +0xC
    hkUlong m_userData;              // +0x10
    hkStringPtr m_name;              // +0x14
};

class hkpConstraintChainInstanceAction : public hkpAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintChainInstanceAction(hkFinishLoadedObjectFlag f) : hkpAction(f) {}

    hkpConstraintChainInstance *m_constraintInstance;   // +0x18
};

const void *HK_CALL getVtablehkpConstraintChainInstanceAction()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpConstraintChainInstanceAction)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpConstraintChainInstanceAction(f);
    return u.ptr;
}
