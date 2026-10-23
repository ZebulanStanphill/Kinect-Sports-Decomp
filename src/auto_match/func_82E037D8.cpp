// hkxScene's scalar deleting destructor ??_GhkxScene@@UAAPAXI@Z
// (Common/SceneData/Scene/hkxScene.h). The destructor is out of line
// (??1hkxScene@@UAA@XZ, fn_82E06758), so it is only declared; the
// finish constructor below only makes the compiler emit the vtable, and with
// it this function.
#include "havok/hkBase.h"

class hkxScene : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxScene(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkxScene();
};

void emitVtable_82E037D8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxScene(f); }
