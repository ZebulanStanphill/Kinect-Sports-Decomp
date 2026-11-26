// hkpMultiRayShape::~hkpMultiRayShape, the implicit destructor (Physics/Collide/Shape/Misc/MultiRay/hkpMultiRayShape.h); identical code also serves hkTraceStream. An implicit destructor does not store the class vtable on entry (a user-written one, even empty, does). It is emitted out of line because the deleting destructor does not inline it; the finish constructor below only makes the compiler emit the vtable.
#include "havok/hkpMultiRayShape.h"

void emitVtable_82D3A990(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpMultiRayShape(f); }
