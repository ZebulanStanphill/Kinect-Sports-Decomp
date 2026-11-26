// hkpSymmetricAgentFlipCollector scalar deleting destructor.
// hkpSymmetricAgentFlipCollector derives from the interface hkpCdPointCollector (RTTI) and has no class
// allocator of its own, so deleting frees sizeof(hkpCdPointCollector) = 0x8 bytes to the heap. The implicit
// destructor leaves only hkpCdPointCollector's vtable store.
// The function at the end only makes the compiler emit the vtable (through the header's constructor).
#include "havok/hkpSymmetricAgent.h"

void emitVtable_82D53E30(void *p, hkpCdPointCollector &c) { new (p) hkpSymmetricAgentFlipCollector(c); }
