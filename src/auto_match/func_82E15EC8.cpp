// hkMemoryResourceHandle scalar deleting destructor: calls the out-of-line,
// user-written ~hkMemoryResourceHandle (fn_82E155D0,
// ??1hkMemoryResourceHandle@@UAA@XZ), then the class allocator's delete. The
// function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

// Common/Base/System/Io/Util/hkResource.h (hierarchy from the RTTI)
class hkResourceBase : public hkReferencedObject {
public:
    hkResourceBase(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
};

class hkResourceHandle : public hkResourceBase {
public:
    hkResourceHandle(hkFinishLoadedObjectFlag f) : hkResourceBase(f) {}
};

class hkMemoryResourceHandle : public hkResourceHandle {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkMemoryResourceHandle(hkFinishLoadedObjectFlag f) : hkResourceHandle(f) {}
    virtual ~hkMemoryResourceHandle();   // out of line (fn_82E155D0)
};

void emitVtable_82E15EC8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkMemoryResourceHandle(f); }
