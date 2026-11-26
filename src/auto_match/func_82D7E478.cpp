// hkpAabbPhantom scalar deleting destructor; it calls ~hkpAabbPhantom (fn_82D8D5D0, out of line) and frees
// through the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpWorldObject.h"

class hkpPhantom : public hkpWorldObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpPhantom(hkFinishLoadedObjectFlag flag) : hkpWorldObject(flag) {}
    virtual ~hkpPhantom();
};

class hkpAabbPhantom : public hkpPhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpAabbPhantom(hkFinishLoadedObjectFlag flag) : hkpPhantom(flag) {}
    virtual ~hkpAabbPhantom();
};

void emitVtable_82D7E478(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpAabbPhantom(f); }
