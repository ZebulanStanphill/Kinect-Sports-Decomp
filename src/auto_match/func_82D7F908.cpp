// hkpRagdollConstraintData's scalar deleting destructor: it calls the out-of-line destructor (fn_82D97BB8,
// ??1hkpRagdollConstraintData@@UAA@XZ) and frees through the class allocator. The constructor below (the header's
// inline finish constructor) only makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"
#include "havok/hkpRagdollConstraintData.h"

void emitVtable_82D7F908(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpRagdollConstraintData(f); }
