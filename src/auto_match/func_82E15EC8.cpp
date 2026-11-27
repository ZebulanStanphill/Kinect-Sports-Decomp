// hkMemoryResourceHandle scalar deleting destructor: calls the out-of-line,
// user-written ~hkMemoryResourceHandle (fn_82E155D0,
// ??1hkMemoryResourceHandle@@UAA@XZ), then the class allocator's delete. The
// function at the end only makes the compiler emit the vtable (it copies an object: the finish constructor is
// out of line).
#include "havok/hkMemoryResourceContainer.h"

void emitVtable_82E15EC8(void *p, const hkMemoryResourceHandle *q) { new (p) hkMemoryResourceHandle(*q); }
