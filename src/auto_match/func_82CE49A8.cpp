// hkMonitorStreamColorTable scalar deleting destructor; it calls the implicit destructor out of line. The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkMonitorStreamColorTable.h"

void emitVtable_82CE49A8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkMonitorStreamColorTable(f); }
