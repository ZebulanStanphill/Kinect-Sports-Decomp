// hkxMaterialShader's scalar deleting destructor ??_GhkxMaterialShader@@UAAPAXI@Z
// (Common/SceneData/Material/hkxMaterialShader.h). The destructor is out of line
// (??1hkxMaterialShader@@UAA@XZ, fn_82E02ED8), so it is only declared; the
// finish constructor below only makes the compiler emit the vtable, and with
// it this function.
#include "havok/hkBase.h"

class hkxMaterialShader : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxMaterialShader(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkxMaterialShader();
};

void emitVtable_82E02F68(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxMaterialShader(f); }
