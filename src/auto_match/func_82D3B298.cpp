// The scalar deleting destructor shared (identical-code folding) by every
// hkReferencedObject subclass whose destructor does nothing: hkpShape,
// hkpSphereShape, hkpMotion, the collision agents, hkReferencedObjectLock and
// about 70 more classes use it as vtable slot 0. It is named after hkpShape,
// one of its owners (the folded copy sits among the hkpShape code).
// The finish constructor below only makes the compiler emit hkpShape's vtable
// and with it ??_GhkpShape@@UAAPAXI@Z.
#include "havok/hkpShape.h"

void emitVtable_82D3B298(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpShape(f); }
