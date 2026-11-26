// hkpStorageMeshShape::hkpStorageMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.cpp): the
// hkpMeshShape base constructor (fn_82D4B040), the two vtables, then the empty
// m_storage hkArray at +0x60.
#include "havok/hkpStorageMeshShape.h"

hkpStorageMeshShape::hkpStorageMeshShape(hkReal radius, int numBitsForSubpartIndex)
    : hkpMeshShape(radius, numBitsForSubpartIndex)
{
}
