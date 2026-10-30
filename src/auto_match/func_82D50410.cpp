// hkpStorageMeshShape scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpStorageMeshShape@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpStorageMeshShape : hkpMeshShape : hkpShapeCollection : hkpShape : hkReferencedObject; only the primary base matters here.
#include "havok/hkBase.h"

class hkpStorageMeshShape : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpStorageMeshShape();
};

extern "C" hkpStorageMeshShape *fn_82D50410(hkpStorageMeshShape *self, unsigned int flags)
{
    self->hkpStorageMeshShape::~hkpStorageMeshShape();
    if (flags & 1)
        hkpStorageMeshShape::operator delete(self);
    return self;
}
