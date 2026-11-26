// hkpDisplayBindingData::PhysicsSystem scalar deleting destructor: calls the out-of-line implicit ~PhysicsSystem (fn_82DE40E0), then frees through the class allocator.
#include "havok/hkBase.h"
#include "havok/hkpDisplayBindingData.h"

void emitVtable_82DE42B8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpDisplayBindingData::PhysicsSystem(f); }
