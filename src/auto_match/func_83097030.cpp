// hkpAabbTreeCollidableRaycaster scalar deleting destructor. The class derives from the four
// hkAabbTreeQueryUtils<...>::Collector interfaces (RTTI order and offsets) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpAabbTreeCollidableRaycaster) = 0x28
// bytes to the heap. The implicit destructor leaves only the bases' vtable stores, last base first.
// The function at the end only makes the compiler emit the vtable: the constructor is out of line, so it
// copies an object (the implicit copy constructor is inline).
#include "havok/hkpAabbTreeCollidableRaycaster.h"

void emitVtable_83097030(void *p, const void *q)
{
    new (p) hkpAabbTreeCollidableRaycaster(*(const hkpAabbTreeCollidableRaycaster *)q);
}
