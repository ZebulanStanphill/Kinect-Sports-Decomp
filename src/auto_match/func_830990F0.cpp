// hkCpuWorldRayCastCollector scalar deleting destructor. The class derives from the collector
// interfaces hkpBroadPhaseCastCollector, hkKdTreeCastCollector and the four
// hkAabbTreeQueryUtils<...>::Collector interfaces (RTTI order and offsets), and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkCpuWorldRayCastCollector) = 0x90 bytes
// to the heap. The implicit destructor leaves only the bases' vtable stores, last base first.
// The function at the end only makes the compiler emit the vtable: it copies an object, since the header's
// constructor is out of line.
#include "havok/hkCpuWorldRayCastCollector.h"

void emitVtable_830990F0(void *p, const void *q)
{
    new (p) hkCpuWorldRayCastCollector(*(const hkCpuWorldRayCastCollector *)q);
}
