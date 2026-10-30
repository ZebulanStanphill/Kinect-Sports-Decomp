// hkpStorageExtendedMeshShape scalar deleting destructor (primary vtable slot 0): the out-of-line
// destructor ??1hkpStorageExtendedMeshShape@@UAA@XZ, then the class allocator's delete when
// flags & 1. It keeps its fn_ name (written out by hand, as for func_82D3A580).
// RTTI: hkpStorageExtendedMeshShape : hkpExtendedMeshShape : hkpShapeCollection : hkpShape
// : hkReferencedObject (+ hkpShapeContainer at +0x10); only the primary base matters here.
#include "havok/hkBase.h"

class hkpStorageExtendedMeshShape : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    virtual ~hkpStorageExtendedMeshShape();
};

extern "C" hkpStorageExtendedMeshShape *fn_82D4F2A0(hkpStorageExtendedMeshShape *self, unsigned int flags)
{
    self->hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape();
    if (flags & 1)
        hkpStorageExtendedMeshShape::operator delete(self);
    return self;
}
