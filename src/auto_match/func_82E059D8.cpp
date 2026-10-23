// hkxMaterialShaderSet's scalar deleting destructor ??_GhkxMaterialShaderSet@@UAAPAXI@Z
// (Common/SceneData/Material/hkxMaterialShaderSet.h): calls the out-of-line destructor
// ??1hkxMaterialShaderSet@@UAA@XZ, then frees through the class allocator. The finish
// constructor below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"

class hkxMaterialShaderSet : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxMaterialShaderSet(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkxMaterialShaderSet();
};

void emitVtable_82E059D8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxMaterialShaderSet(f); }
