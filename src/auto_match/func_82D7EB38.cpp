// hkpAction scalar deleting destructor (Physics/Dynamics/Action/hkpAction.h; folded with
// hkpConstraintChainInstanceAction's): the inline destructor (vtable, then m_name's out-of-line
// ~hkStringPtr, fn_82CED5B8, then hkBaseObject's vtable), then the class allocator's delete.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpAction.h"

void emitVtable_82D7EB38(hkpAction *p) { p->hkpAction::~hkpAction(); }
