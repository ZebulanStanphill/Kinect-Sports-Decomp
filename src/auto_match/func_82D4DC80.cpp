// hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh): the radius (f1) and bit count (r4) pass
// straight through to hkpExtendedMeshShape's constructor, then the two hkArrays are default-constructed.
#include "havok/hkpShape.h"
struct ShapesSubpart {
    char data[0x40];
    ~ShapesSubpart();
};
class hkpExtendedMeshShape : public hkpShapeCollection {
public:
    hkpExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex);
    virtual ~hkpExtendedMeshShape();
    char pad[0xA8];
    hkArrayBase<ShapesSubpart> m_shapesSubparts;
    char tail[0x24];
};
class hkpStorageExtendedMeshShape : public hkpExtendedMeshShape {
public:
    hkpStorageExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex);
    virtual ~hkpStorageExtendedMeshShape();
    hkArray<hkReferencedObject *> m_meshStorage;    // +0xF0
    hkArray<hkReferencedObject *> m_shapeStorage;   // +0xFC
};

hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex)
    : hkpExtendedMeshShape(radius, numBitsForSubpartIndex)
{
}
