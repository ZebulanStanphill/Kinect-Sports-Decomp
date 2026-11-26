// hkCpuWorldLinearCastCollector scalar deleting destructor. The class derives from the collector
// interfaces hkpBroadPhaseCastCollector, hkKdTreeCastCollector and the four
// hkAabbTreeQueryUtils<...>::Collector interfaces (RTTI order and offsets), and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkCpuWorldLinearCastCollector) = 0xa0 bytes
// to the heap. The implicit destructor leaves only the bases' vtable stores, last base first.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkCpuWorldLinearCastCollector.h"

void emitVtable_83099C88(void *p) { new (p) hkCpuWorldLinearCastCollector; }
