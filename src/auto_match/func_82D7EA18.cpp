// hkpConstraintChainInstance's scalar deleting destructor (slot 0 of ??_7hkpConstraintChainInstance@@6B@ only): it calls ~hkpConstraintChainInstance (out of line) and frees
// through the class allocator. The function at the end only makes the compiler emit the vtable (and with it the
// deleting destructor); it uses the implicit copy constructor.
#include "havok/hkBase.h"
#include "havok/hkpConstraintChainInstance.h"

void emitVtable_82D7EA18(void *p, const hkpConstraintChainInstance &o) { new (p) hkpConstraintChainInstance(o); }
