// hkpWorldObject scalar deleting destructor; it calls ~hkpWorldObject (fn_82D7E268, out of line) and frees
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

void emitVtable_82D7E318(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpWorldObject(f); }
