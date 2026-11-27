// hkgpConvexHull's scalar deleting destructor (slot 0 of ??_7hkgpConvexHull@@6B@): it calls the out-of-line
// destructor (func_82D0D640) and frees through hkReferencedObject's class allocator. The function at the end only
// makes the compiler emit the vtable; the declared constructor is out of line, so it uses the implicit copy
// constructor.
#include "havok/hkgpConvexHull.h"

void emitVtable_82D16800(void *p, const hkgpConvexHull &o) { new (p) hkgpConvexHull(o); }
