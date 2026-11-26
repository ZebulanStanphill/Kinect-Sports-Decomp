// hkxMeshSection's scalar deleting destructor ??_GhkxMeshSection@@UAAPAXI@Z
// (Common/SceneData/Mesh/hkxMeshSection.h). The destructor is out of line
// (??1hkxMeshSection@@UAA@XZ, fn_82E03248); the finish constructor below only
// makes the compiler emit the vtable, and with it this function.
#include "havok/hkSceneData.h"

void emitVtable_82E03390(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxMeshSection(f); }
