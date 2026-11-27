// hkpGenericConstraintData's scalar deleting destructor: it calls the out-of-line destructor
// (fn_82D9DF68, ??1hkpGenericConstraintData@@UAA@XZ) and frees through the class allocator.
// The function below only makes the compiler emit the vtable, and with it the deleting destructor; the finish
// constructor is out of line, so it uses the implicit copy constructor.
#include "havok/hkBase.h"
#include "havok/hkpGenericConstraintData.h"

void emitVtable_82D9EA58(void *p, const hkpGenericConstraintData &o) { new (p) hkpGenericConstraintData(o); }
