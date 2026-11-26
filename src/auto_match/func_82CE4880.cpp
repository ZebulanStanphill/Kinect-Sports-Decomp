// hkMonitorStreamColorTable::~hkMonitorStreamColorTable, the implicit destructor (Common/Base/Monitor/MonitorStreamAnalyzer?): destroys m_colorPairs (each element's hkStringPtr, first to last). Emitted out of line because the deleting destructor (fn_82CE49A8) calls it; the finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkMonitorStreamColorTable.h"

void emitVtable_82CE4880(void *p, hkFinishLoadedObjectFlag f) { new (p) hkMonitorStreamColorTable(f); }
