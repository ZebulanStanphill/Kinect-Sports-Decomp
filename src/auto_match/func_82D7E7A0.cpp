// hkpCachingShapePhantom scalar deleting destructor; it calls ~hkpCachingShapePhantom (fn_82D9C148, out of
// line) and frees through the class allocator. The function at the end only makes the compiler emit the vtable.
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

class hkpShapePhantom : public hkpPhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpShapePhantom(hkFinishLoadedObjectFlag flag) : hkpPhantom(flag) {}
};

class hkpCachingShapePhantom : public hkpShapePhantom {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpCachingShapePhantom(hkFinishLoadedObjectFlag flag) : hkpShapePhantom(flag) {}
    virtual ~hkpCachingShapePhantom();
};

void emitVtable_82D7E7A0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpCachingShapePhantom(f); }
