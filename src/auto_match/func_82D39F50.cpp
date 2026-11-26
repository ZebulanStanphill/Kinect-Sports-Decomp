// hkpConvexVerticesConnectivity::~hkpConvexVerticesConnectivity, the implicit destructor (Physics/Collide/Shape/
// Convex/ConvexVertices/hkpConvexVerticesConnectivity.h), emitted out of line: the deleting destructor
// (fn_82D3A008) calls it. It destroys the two hkArrays in reverse order. The function at the end only makes
// the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpConvexVerticesConnectivity.h"

void emitVtable_82D39F50(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpConvexVerticesConnectivity(f); }
