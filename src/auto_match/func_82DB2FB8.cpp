// hkpKdTreeCollidableRaycaster scalar deleting destructor.
// hkpKdTreeCollidableRaycaster derives from the interface hkKdTreeCastCollector (RTTI) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpKdTreeCollidableRaycaster) = 0x18 bytes
// to the heap. The implicit destructor leaves only hkKdTreeCastCollector's vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpKdTreeCollidableRaycaster.h"

void emitVtable_82DB2FB8(void *p) { new (p) hkpKdTreeCollidableRaycaster; }
