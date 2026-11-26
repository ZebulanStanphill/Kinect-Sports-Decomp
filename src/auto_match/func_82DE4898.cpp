// hkpPhysicsData scalar deleting destructor (compiler-generated); it calls the destructor out of line (??1,
// fn_82DF3248). The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpPhysicsData.h"

void emitVtable_82DE4898(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpPhysicsData(f); }
