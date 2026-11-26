// hkpCdPointCollector scalar deleting destructor ??_GhkpCdPointCollector@@UAAPAXI@Z, emitted in a game object
// (/O1). hkpCdPointCollector is an interface without base class with Havok's non-virtual
// class allocator: deleting frees sizeof(hkpCdPointCollector) = 8 bytes to the heap.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkpCdPointCollector.h"

void emitVtable_825CD0D8(hkpCdPointCollector *p) { p->hkpCdPointCollector::~hkpCdPointCollector(); }
