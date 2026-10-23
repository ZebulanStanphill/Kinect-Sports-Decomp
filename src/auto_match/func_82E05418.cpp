// hkxEnvironment's scalar deleting destructor ??_GhkxEnvironment@@UAAPAXI@Z
// calls the out-of-line destructor
// ??1hkxEnvironment@@UAA@XZ, then frees through the class allocator. The finish
// constructor below only makes the compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"

class hkxEnvironment : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxEnvironment(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkxEnvironment();
};

void emitVtable_82E05418(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxEnvironment(f); }
