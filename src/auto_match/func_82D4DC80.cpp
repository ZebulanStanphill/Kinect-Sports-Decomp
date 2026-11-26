// hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh): the radius (f1) and bit count (r4) pass
// straight through to hkpExtendedMeshShape's constructor, then the two hkArrays are default-constructed.
#include "havok/hkpStorageExtendedMeshShape.h"

hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex)
    : hkpExtendedMeshShape(radius, numBitsForSubpartIndex)
{
}
