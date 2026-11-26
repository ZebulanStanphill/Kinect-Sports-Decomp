// hkxScene's scalar deleting destructor ??_GhkxScene@@UAAPAXI@Z
// (Common/SceneData/Scene/hkxScene.h). The destructor is out of line
// (??1hkxScene@@UAA@XZ, fn_82E06758), so it is only declared; the
// finish constructor below only makes the compiler emit the vtable, and with
// it this function.
#include "havok/hkBase.h"
#include "havok/hkSceneData.h"

void emitVtable_82E037D8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxScene(f); }
