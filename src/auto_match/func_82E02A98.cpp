// hkxIndexBuffer's scalar deleting destructor ??_GhkxIndexBuffer@@UAAPAXI@Z
// (Common/SceneData/Mesh/hkxIndexBuffer.h). The destructor is out of line
// (??1hkxIndexBuffer@@UAA@XZ, fn_82E029E0); the finish constructor below only
// makes the compiler emit the vtable, and with it this function.
#include "havok/hkSceneData.h"

void emitVtable_82E02A98(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxIndexBuffer(f); }
