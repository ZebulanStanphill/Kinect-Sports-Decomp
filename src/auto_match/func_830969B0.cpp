// hkKdTreeCollidableRayBundleCaster scalar deleting destructor.
// hkKdTreeCollidableRayBundleCaster derives from the interface hkKdTreeBundleCastCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkKdTreeCollidableRayBundleCaster) = 0x14 bytes
// to the heap. The implicit destructor leaves only hkKdTreeBundleCastCollector's vtable store.
// The function at the end only makes the compiler emit the vtable: the constructor is out of line, so it
// copies an object (the implicit copy constructor is inline).
#include "havok/hkKdTreeCollidableRayBundleCaster.h"

void emitVtable_830969B0(void *p, const void *q)
{
    new (p) hkKdTreeCollidableRayBundleCaster(*(const hkKdTreeCollidableRayBundleCaster *)q);
}
