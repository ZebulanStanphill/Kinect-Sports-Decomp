// hkxMesh scalar deleting destructor: calls the out-of-line ~hkxMesh
// (fn_82E05D78, ??1hkxMesh@@UAA@XZ), then the class allocator's delete. The
// function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

// Common/SceneData/Mesh/hkxMesh.h (hierarchy from the RTTI)
class hkxMesh : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxMesh(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkxMesh();   // out of line (fn_82E05D78)
};

void emitVtable_82E05EA8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxMesh(f); }
