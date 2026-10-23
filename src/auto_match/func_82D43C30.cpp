// hkpExtendedMeshShape scalar deleting destructor; it calls ~hkpExtendedMeshShape (fn_82D43798, out of line) and frees
// through the class allocator. The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

class hkpExtendedMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpExtendedMeshShape(hkFinishLoadedObjectFlag flag) : hkpShapeCollection(flag) {}
    virtual ~hkpExtendedMeshShape();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
};

void emitVtable_82D43C30(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpExtendedMeshShape(f); }
