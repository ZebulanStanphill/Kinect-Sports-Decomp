// hkpPairCollisionFilter's scalar deleting destructor ??_GhkpPairCollisionFilter@@UAAPAXI@Z
// (Physics/Collide/Filter/Pair/hkpPairCollisionFilter.h): calls the out-of-line destructor
// (fn_82DC9AA8), then frees through the class allocator. The function at the end only makes the
// compiler emit the vtable, and with it this function.
#include "havok/hkpPairCollisionFilter.h"

void emitVtable_82DC9EB0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpPairCollisionFilter(f); }
