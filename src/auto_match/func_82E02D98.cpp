// hkxMaterialEffect's scalar deleting destructor ??_GhkxMaterialEffect@@UAAPAXI@Z
// (Common/SceneData/Material/hkxMaterialEffect.h). The destructor is out of line
// (??1hkxMaterialEffect@@UAA@XZ, fn_82E02D20), so it is only declared; the
// finish constructor below only makes the compiler emit the vtable, and with
// it this function.
#include "havok/hkBase.h"

class hkxMaterialEffect : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxMaterialEffect(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkxMaterialEffect();
};

void emitVtable_82E02D98(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxMaterialEffect(f); }
