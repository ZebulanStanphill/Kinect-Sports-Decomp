// hkxSparselyAnimatedString's scalar deleting destructor ??_GhkxSparselyAnimatedString@@UAAPAXI@Z
// calls the out-of-line destructor
// ??1hkxSparselyAnimatedString@@UAA@XZ, then frees through the class allocator. The finish
// constructor below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"

class hkxSparselyAnimatedString : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxSparselyAnimatedString(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkxSparselyAnimatedString();
};

void emitVtable_82E03CB0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxSparselyAnimatedString(f); }
