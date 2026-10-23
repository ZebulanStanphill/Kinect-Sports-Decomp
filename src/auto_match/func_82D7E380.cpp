// hkpPhantom scalar deleting destructor; it calls ~hkpPhantom (fn_82D9AA48, out of line) and frees
// through the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpWorld;

class hkpWorldObject : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpWorldObject(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual ~hkpWorldObject();

    hkpWorld *m_world;    // +0x8
    hkUlong m_userData;   // +0xC
};

class hkpPhantom : public hkpWorldObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpPhantom(hkFinishLoadedObjectFlag flag) : hkpWorldObject(flag) {}
    virtual ~hkpPhantom();
};

void emitVtable_82D7E380(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpPhantom(f); }
