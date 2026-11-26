// hkxTextureInplace's scalar deleting destructor ??_GhkxTextureInplace@@UAAPAXI@Z
// calls the out-of-line destructor
// ??1hkxTextureInplace@@UAA@XZ, then frees through the class allocator. The finish
// constructor below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"
#include "havok/hkSceneData.h"

void emitVtable_82E03FC8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxTextureInplace(f); }
