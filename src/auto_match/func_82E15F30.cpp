// hkMemoryResourceContainer scalar deleting destructor: calls the out-of-line,
// user-written ~hkMemoryResourceContainer (fn_82E15830,
// ??1hkMemoryResourceContainer@@UAA@XZ), then the class allocator's delete. The
// function at the end only makes the compiler emit the vtable (it copies an object: the finish constructor is
// out of line).
#include "havok/hkMemoryResourceContainer.h"

void emitVtable_82E15F30(void *p, const hkMemoryResourceContainer *q) { new (p) hkMemoryResourceContainer(*q); }
