// hkpCachingShapePhantom scalar deleting destructor; it calls ~hkpCachingShapePhantom (fn_82D9C148, out of
// line) and frees through the class allocator. The constructors are out of line; the implicit copy constructor
// below only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpCachingShapePhantom.h"

void emitVtable_82D7E7A0(void *p, const hkpCachingShapePhantom &other) { new (p) hkpCachingShapePhantom(other); }
