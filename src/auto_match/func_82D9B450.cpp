// hkpBallSocketChainData's scalar deleting destructor: it calls the out-of-line destructor (fn_82D9B138,
// ??1hkpBallSocketChainData@@UAA@XZ) and frees through the class allocator. The constructor below (the
// header's inline finish constructor) only makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"
#include "havok/hkpBallSocketChainData.h"

void emitVtable_82D9B450(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpBallSocketChainData(f); }
