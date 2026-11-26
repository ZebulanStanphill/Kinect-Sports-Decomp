// hkpShapeCollectionAgent scalar deleting destructor: calls the implicit destructor (fn_82D55060) out of line,
// then frees through the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkpShapeCollectionAgent.h"

// The header's constructor is out of line, so the implicit copy constructor makes the compiler emit the vtable.
void emitVtable_82D55498(void *p, const void *q) { new (p) hkpShapeCollectionAgent(*(const hkpShapeCollectionAgent *)q); }
