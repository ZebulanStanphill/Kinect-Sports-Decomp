// hkpHeightFieldAgent scalar deleting destructor; it calls ~hkpHeightFieldAgent (fn_82D5AB78, out of line) and
// frees through the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkpHeightFieldAgent.h"

// The header's constructor is out of line, so the implicit copy constructor makes the compiler emit the vtable.
void emitVtable_82D5B118(void *p, const void *q) { new (p) hkpHeightFieldAgent(*(const hkpHeightFieldAgent *)q); }
