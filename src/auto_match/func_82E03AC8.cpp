// hkxSparselyAnimatedBool's scalar deleting destructor ??_GhkxSparselyAnimatedBool@@UAAPAXI@Z
// calls the out-of-line destructor
// ??1hkxSparselyAnimatedBool@@UAA@XZ, then frees through the class allocator. The finish
// constructor below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"

class hkxSparselyAnimatedBool : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxSparselyAnimatedBool(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkxSparselyAnimatedBool();
};

void emitVtable_82E03AC8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxSparselyAnimatedBool(f); }
