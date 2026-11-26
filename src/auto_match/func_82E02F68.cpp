// hkxMaterialShader's scalar deleting destructor ??_GhkxMaterialShader@@UAAPAXI@Z
// (Common/SceneData/Material/hkxMaterialShader.h). It calls the destructor, which is
// out of line (??1hkxMaterialShader@@UAA@XZ, fn_82E02ED8); the finish constructor
// below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkSceneData.h"

void emitVtable_82E02F68(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxMaterialShader(f); }
