// hkxSparselyAnimatedBool's scalar deleting destructor ??_GhkxSparselyAnimatedBool@@UAAPAXI@Z
// calls the out-of-line destructor
// ??1hkxSparselyAnimatedBool@@UAA@XZ, then frees through the class allocator. The finish
// constructor below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkSceneData.h"

void emitVtable_82E03AC8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxSparselyAnimatedBool(f); }
