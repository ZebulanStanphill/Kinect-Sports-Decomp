// hkxSparselyAnimatedEnum's scalar deleting destructor (slot 0 of ??_7hkxSparselyAnimatedEnum@@6B@): the
// implicit destructor inlined (m_enum's hkRefPtr destructor), hkxSparselyAnimatedInt's destructor out of line
// (82E025E0), then the class allocator's free. The finish constructor below only makes the compiler emit the
// vtable, and with it this function.
#include "havok/hkxSparselyAnimatedEnum.h"

inline void *operator new(unsigned int, void *p) { return p; }

void emitVtable_82E027A0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxSparselyAnimatedEnum(f); }
