// hkDefaultError scalar deleting destructor; it calls the implicit destructor out of line. The function at the end
// only makes the compiler emit the vtable; it copies an object because the header declares no inline constructor.
#include "havok/hkBase.h"
#include "havok/hkError.h"

void emitVtable_82CFA4C0(void *p, const void *q) { new (p) hkDefaultError(*(const hkDefaultError *)q); }
