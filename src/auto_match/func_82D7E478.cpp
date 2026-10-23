// hkpAabbPhantom scalar deleting destructor; it calls ~hkpAabbPhantom (fn_82D8D5D0, out of line) and frees
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

class hkpAabbPhantom : public hkpPhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpAabbPhantom(hkFinishLoadedObjectFlag flag) : hkpPhantom(flag) {}
    virtual ~hkpAabbPhantom();
};

void emitVtable_82D7E478(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpAabbPhantom(f); }
