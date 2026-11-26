// hkpEntity's scalar deleting destructor (slot 0 of ??_7hkpEntity@@6B@): it calls ~hkpEntity (out of line)
// and frees through the class allocator. The function at the end only makes the compiler emit the vtable; the
// declared constructors are out of line, so it uses the implicit copy constructor.
#include "havok/hkpEntity.h"

void emitVtable_82D8B100(void *p, const hkpEntity &o) { new (p) hkpEntity(o); }
