// hkxSparselyAnimatedInt's scalar deleting destructor (slot 0 of ??_7hkxSparselyAnimatedInt@@6B@): the
// out-of-line implicit destructor (??1hkxSparselyAnimatedInt@@UAA@XZ, 82E025E0), then the class allocator's
// free. The finish constructor below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkxSparselyAnimatedInt.h"

inline void *operator new(unsigned int, void *p) { return p; }

void emitVtable_82E02698(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxSparselyAnimatedInt(f); }
