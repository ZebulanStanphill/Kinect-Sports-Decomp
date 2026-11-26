// hkpClosestCdPointCollector scalar deleting destructor.
// hkpClosestCdPointCollector derives from the interface hkpCdPointCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpClosestCdPointCollector) = 0x40 bytes
// to the heap. The implicit destructor leaves only hkpCdPointCollector's vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkpClosestCdPointCollector.h"

void emitVtable_82D5D3E8(void *p) { new (p) hkpClosestCdPointCollector; }
