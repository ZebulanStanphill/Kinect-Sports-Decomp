// hkpPrismaticConstraintData's scalar deleting destructor: it calls the out-of-line destructor (fn_82D96FB0,
// ??1hkpPrismaticConstraintData@@UAA@XZ) and frees through the class allocator. The constructor below (the
// header's inline finish constructor) only makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"
#include "havok/hkpPrismaticConstraintData.h"

void emitVtable_82D7F780(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpPrismaticConstraintData(f); }
