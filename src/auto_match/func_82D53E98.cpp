// hkpSymmetricAgentFlipCastCollector scalar deleting destructor (identical code also serves hkpSimpleClosestContactCollector).
// hkpSymmetricAgentFlipCastCollector derives from the interface hkpCdPointCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpSymmetricAgentFlipCastCollector) = 0x30 bytes
// to the heap. The implicit destructor leaves only hkpCdPointCollector's vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkpSymmetricAgent.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

void emitVtable_82D53E98(void *p, const hkVector4 &path, hkpCdPointCollector &c)
{
    new (p) hkpSymmetricAgentFlipCastCollector(path, c);
}
