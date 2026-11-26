// hkpListShape scalar deleting destructor; it calls ~hkpListShape (fn_82D3E550, out of line) and frees
// through the class allocator. The copy at the end only makes the compiler emit the vtable (the header declares
// no inline constructor).
#include "havok/hkpListShape.h"

void emitVtable_82D3E698(void *p, const void *q) { new (p) hkpListShape(*(const hkpListShape *)q); }
