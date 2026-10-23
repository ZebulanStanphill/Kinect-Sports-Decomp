// hkxIndexBuffer's scalar deleting destructor ??_GhkxIndexBuffer@@UAAPAXI@Z
// (Common/SceneData/Mesh/hkxIndexBuffer.h). The destructor is out of line
// (??1hkxIndexBuffer@@UAA@XZ, fn_82E029E0), so it is only declared; the
// finish constructor below only makes the compiler emit the vtable, and with
// it this function.
#include "havok/hkBase.h"

class hkxIndexBuffer : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxIndexBuffer(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkxIndexBuffer();
};

void emitVtable_82E02A98(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxIndexBuffer(f); }
