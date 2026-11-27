// hkxSparselyAnimatedInt::~hkxSparselyAnimatedInt, the implicit destructor (Common/SceneData/Attributes/
// hkxSparselyAnimatedInt.h; no class vtable store on entry): m_times, then m_ints. It is emitted out of line
// because the deleting destructors of hkxSparselyAnimatedInt and of its subclass hkxSparselyAnimatedEnum call
// it. The finish constructor below only makes the compiler emit the vtable.
#include "havok/hkxSparselyAnimatedInt.h"

inline void *operator new(unsigned int, void *p) { return p; }

void emitVtable_82E025E0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxSparselyAnimatedInt(f); }
