// hkpListShape scalar deleting destructor; it calls ~hkpListShape (fn_82D3E550, out of line) and frees
// through the class allocator. The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

class hkpListShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpListShape(hkFinishLoadedObjectFlag flag) : hkpShapeCollection(flag) {}
    virtual ~hkpListShape();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
};

void emitVtable_82D3E698(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpListShape(f); }
