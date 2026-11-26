// hkpWorldObject scalar deleting destructor; it calls ~hkpWorldObject (fn_82D7E268, out of line) and frees
// through the class allocator. The function at the end only makes the compiler emit the vtable; both declared
// constructors are out of line, so it uses the implicit copy constructor.
#include "havok/hkpWorldObject.h"

void emitVtable_82D7E318(void *p, const hkpWorldObject &o) { new (p) hkpWorldObject(o); }
