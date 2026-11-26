// hkxMaterialEffect's scalar deleting destructor ??_GhkxMaterialEffect@@UAAPAXI@Z
// (Common/SceneData/Material/hkxMaterialEffect.h). The destructor is out of line
// (??1hkxMaterialEffect@@UAA@XZ, fn_82E02D20); the
// finish constructor below only makes the compiler emit the vtable, and with
// it this function.
#include "havok/hkBase.h"
#include "havok/hkSceneData.h"

void emitVtable_82E02D98(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxMaterialEffect(f); }
