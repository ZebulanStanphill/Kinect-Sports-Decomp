// hkxMeshSection's scalar deleting destructor ??_GhkxMeshSection@@UAAPAXI@Z
// (Common/SceneData/Mesh/hkxMeshSection.h). The destructor is out of line
// (??1hkxMeshSection@@UAA@XZ, fn_82E03248), so it is only declared; the
// finish constructor below only makes the compiler emit the vtable, and with
// it this function.
#include "havok/hkBase.h"

class hkxMeshSection : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxMeshSection(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkxMeshSection();
};

void emitVtable_82E03390(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxMeshSection(f); }
