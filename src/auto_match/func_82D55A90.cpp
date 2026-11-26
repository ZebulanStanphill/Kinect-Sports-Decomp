// hkpBvTreeAgent scalar deleting destructor: calls the user-written destructor (fn_82D558B0) out of line,
// then frees through the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkpBvTreeAgent.h"

// The header's constructor is out of line, so the implicit copy constructor makes the compiler emit the vtable.
void emitVtable_82D55A90(void *p, const void *q) { new (p) hkpBvTreeAgent(*(const hkpBvTreeAgent *)q); }
