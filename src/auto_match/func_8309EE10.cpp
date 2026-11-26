// hkKdTreeCpuBroadphaseBundleCastCollector scalar deleting destructor.
// hkKdTreeCpuBroadphaseBundleCastCollector derives from the interface hkKdTreeBundleCastCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkKdTreeCpuBroadphaseBundleCastCollector) = 0x90 bytes
// to the heap. The implicit destructor leaves only hkKdTreeBundleCastCollector's vtable store.
// The function at the end only makes the compiler emit the vtable: the constructor is out of line, so it
// copies an object (the implicit copy constructor is inline).
#include "havok/hkKdTreeCpuBroadphaseBundleCastCollector.h"

void emitVtable_8309EE10(void *p, const void *q) { new (p) hkKdTreeCpuBroadphaseBundleCastCollector(*(const hkKdTreeCpuBroadphaseBundleCastCollector *)q); }
