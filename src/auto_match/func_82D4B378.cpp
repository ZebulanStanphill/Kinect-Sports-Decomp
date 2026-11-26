// hkpFastMeshShape::hkpFastMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Deprecated/FastMesh/hkpFastMeshShape.cpp): only the
// base constructor, then the vtables.
#include "havok/hkpFastMeshShape.h"

hkpFastMeshShape::hkpFastMeshShape(hkReal radius, int numBitsForSubpartIndex)
    : hkpMeshShape(radius, numBitsForSubpartIndex)
{
}
