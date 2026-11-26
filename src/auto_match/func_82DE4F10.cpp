// hkpSerializedDisplayMarkerList scalar deleting destructor (compiler-generated); it calls the destructor out of
// line (??1, fn_82DE4E60). The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpSerializedDisplayMarkerList.h"

void emitVtable_82DE4F10(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSerializedDisplayMarkerList(f); }
