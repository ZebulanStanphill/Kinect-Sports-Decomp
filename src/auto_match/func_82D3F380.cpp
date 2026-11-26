// hkpConvexVerticesShape::~hkpConvexVerticesShape (Physics/Collide/Shape/Convex/ConvexVertices/
// hkpConvexVerticesShape.cpp): releases the connectivity, then the plane equations and rotated vertices
// hkArrays and the bases are destroyed.
#include "havok/hkpConvexVerticesConnectivity.h"
#include "havok/hkpConvexVerticesShape.h"

hkpConvexVerticesShape::~hkpConvexVerticesShape()
{
    if (m_connectivity)
        m_connectivity->removeReference();
}
