// hkpAction scalar deleting destructor (Physics/Dynamics/Action/hkpAction.h; folded with
// hkpConstraintChainInstanceAction's): the inline destructor (vtable, then m_name's out-of-line
// ~hkStringPtr, fn_82CED5B8, then hkBaseObject's vtable), then the class allocator's delete.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpWorld;
class hkpSimulationIsland;

class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    virtual ~hkpAction() {}

    hkpWorld *m_world;               // +0x8
    hkpSimulationIsland *m_island;   // +0xC
    hkUlong m_userData;              // +0x10
    hkStringPtr m_name;              // +0x14
};

void emitVtable_82D7EB38(hkpAction *p) { p->hkpAction::~hkpAction(); }
