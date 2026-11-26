// hkpVehicleDefaultSuspension scalar deleting destructor: the implicit destructor is inlined
// (m_wheelSpringParams, 0xC-byte elements, then hkpVehicleSuspension's out-of-line implicit
// destructor ??1, fn_82DF9958). The finish constructor below only makes the compiler emit
// the vtable.
#include "havok/hkpVehicleDefaultSuspension.h"

void emitVtable_82DF99C8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleDefaultSuspension(f); }
