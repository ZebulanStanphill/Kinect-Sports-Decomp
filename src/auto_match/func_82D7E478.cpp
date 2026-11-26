// hkpAabbPhantom scalar deleting destructor; it calls ~hkpAabbPhantom (fn_82D8D5D0, out of line) and frees
// through the class allocator. The function at the end only makes the compiler emit the vtable; the header
// declares no inline constructor, so it uses the implicit copy constructor.
#include "havok/hkpAabbPhantom.h"

void emitVtable_82D7E478(void *p, const hkpAabbPhantom &o) { new (p) hkpAabbPhantom(o); }
