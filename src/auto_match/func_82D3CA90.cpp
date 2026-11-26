// hkpBoxShape::~hkpBoxShape, the implicit destructor (Physics/Collide/Shape/Convex/Box/hkpBoxShape.h),
// emitted out of line: hkpBoxShape's deleting destructor (fn_82D39138) calls it. Nothing to destroy, so
// only hkBaseObject's vtable store is left. The function at the end only makes the compiler emit the
// vtable.
#include "havok/hkpBoxShape.h"

hkpBoxShape::~hkpBoxShape() {}

void emitVtable_82D3CA90(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpBoxShape(f); }
