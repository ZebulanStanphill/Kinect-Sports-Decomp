// hkpMultiRayShape scalar deleting destructor (also hkTraceStream's, by identical-code folding); it calls the implicit destructor out of line. The finish constructor below only makes the compiler emit the vtable.
#include "havok/hkpMultiRayShape.h"

void emitVtable_82D3AA00(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpMultiRayShape(f); }
