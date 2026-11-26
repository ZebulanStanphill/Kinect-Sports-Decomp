// hkpSymmetricAgentFlipBodyCollector scalar deleting destructor.
// hkpSymmetricAgentFlipBodyCollector derives from the interface hkpCdBodyPairCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpSymmetricAgentFlipBodyCollector) = 0xC bytes
// to the heap. The implicit destructor leaves only hkpCdBodyPairCollector's vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpSymmetricAgent.h"

void emitVtable_82D53F00(void *p, hkpCdBodyPairCollector &c) { new (p) hkpSymmetricAgentFlipBodyCollector(c); }
