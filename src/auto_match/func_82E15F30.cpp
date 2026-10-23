// hkMemoryResourceContainer scalar deleting destructor: calls the out-of-line,
// user-written ~hkMemoryResourceContainer (fn_82E15830,
// ??1hkMemoryResourceContainer@@UAA@XZ), then the class allocator's delete. The
// function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

// Common/Base/System/Io/Util/hkResource.h (hierarchy from the RTTI)
class hkResourceBase : public hkReferencedObject {
public:
    hkResourceBase(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
};

class hkResourceContainer : public hkResourceBase {
public:
    hkResourceContainer(hkFinishLoadedObjectFlag f) : hkResourceBase(f) {}
};

// Common/SceneData/... hkMemoryResourceContainer
class hkMemoryResourceContainer : public hkResourceContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkMemoryResourceContainer(hkFinishLoadedObjectFlag f) : hkResourceContainer(f) {}
    virtual ~hkMemoryResourceContainer();   // out of line (fn_82E15830)
};

void emitVtable_82E15F30(void *p, hkFinishLoadedObjectFlag f) { new (p) hkMemoryResourceContainer(f); }
