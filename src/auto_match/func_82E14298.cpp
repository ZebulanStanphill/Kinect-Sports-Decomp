// hkVersionRegistry scalar deleting destructor: calls the out-of-line,
// user-written ~hkVersionRegistry (fn_82E13A78, ??1hkVersionRegistry@@UAA@XZ),
// then the class allocator's delete. The function at the end only makes the
// compiler emit the vtable: the header declares no inline constructor, so it
// copies an object.
#include "havok/hkBase.h"
#include "havok/hkVersionRegistry.h"

void emitVtable_82E14298(void *p, const void *q) { new (p) hkVersionRegistry(*(const hkVersionRegistry *)q); }
