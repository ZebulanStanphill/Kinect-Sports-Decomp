// hkpFastMeshShape::hkpFastMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Deprecated/FastMesh/hkpFastMeshShape.cpp): only the
// base constructor, then the vtables.
#include "havok/hkpMeshShape.h"

class hkpFastMeshShape : public hkpMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpFastMeshShape(hkReal radius, int numBitsForSubpartIndex);
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
};

hkpFastMeshShape::hkpFastMeshShape(hkReal radius, int numBitsForSubpartIndex)
    : hkpMeshShape(radius, numBitsForSubpartIndex)
{
}
