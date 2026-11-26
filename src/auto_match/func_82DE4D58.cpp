// hkpSerializedAgentNnEntry scalar deleting destructor (compiler-generated); it calls the destructor out of line
// (??1, fn_82DF5078). The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpSerializedAgentNnEntry.h"

void emitVtable_82DE4D58(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSerializedAgentNnEntry(f); }
