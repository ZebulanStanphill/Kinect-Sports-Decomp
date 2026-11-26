// hkxAnimatedFloat's scalar deleting destructor ??_GhkxAnimatedFloat@@UAAPAXI@Z
// calls the out-of-line destructor
// ??1hkxAnimatedFloat@@UAA@XZ, then frees through the class allocator. The finish
// constructor below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkSceneData.h"

void emitVtable_82E040F0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxAnimatedFloat(f); }
