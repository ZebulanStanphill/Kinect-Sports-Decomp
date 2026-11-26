// hkxSkinBinding's scalar deleting destructor ??_GhkxSkinBinding@@UAAPAXI@Z
// (Common/SceneData/Skin/hkxSkinBinding.h). It calls the destructor
// (??1hkxSkinBinding@@UAA@XZ, fn_82E03890) rather than inlining it; the
// finish constructor below only makes the compiler emit the vtable, and with
// it this function.
#include "havok/hkSceneData.h"

void emitVtable_82E03958(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxSkinBinding(f); }
