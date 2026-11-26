// hkxEnvironment's scalar deleting destructor ??_GhkxEnvironment@@UAAPAXI@Z
// calls the out-of-line destructor
// ??1hkxEnvironment@@UAA@XZ, then frees through the class allocator. The finish
// constructor below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkSceneData.h"

void emitVtable_82E05418(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxEnvironment(f); }
