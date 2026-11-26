// hkpFixedBufferCdPointCollector scalar deleting destructor.
// hkpFixedBufferCdPointCollector derives from the interface hkpCdPointCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpFixedBufferCdPointCollector) = 0x18 bytes
// to the heap. The implicit destructor leaves only hkpCdPointCollector's vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkpFixedBufferCdPointCollector.h"

void emitVtable_83099D28(void *p, hkpRootCdPoint *buffer) { new (p) hkpFixedBufferCdPointCollector(buffer, 1); }
