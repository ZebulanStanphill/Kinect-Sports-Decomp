// hkxSkinBinding's scalar deleting destructor ??_GhkxSkinBinding@@UAAPAXI@Z
// (Common/SceneData/Skin/hkxSkinBinding.h). The destructor is out of line
// (??1hkxSkinBinding@@UAA@XZ, fn_82E03890), so it is only declared; the
// finish constructor below only makes the compiler emit the vtable, and with
// it this function.
#include "havok/hkBase.h"

class hkxSkinBinding : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxSkinBinding(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkxSkinBinding();
};

void emitVtable_82E03958(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxSkinBinding(f); }
