// hkpMultiSphereShape::hkpMultiSphereShape(const hkVector4 *spheres, int numSpheres)
// (Physics/Collide/Shape/Convex/MultiSphere/hkpMultiSphereShape.cpp): copies the spheres and their count.
#include "havok/hkpMultiSphereShape.h"
hkpMultiSphereShape::hkpMultiSphereShape(const hkVector4 *spheres, int count)
    : hkpSphereRepShape(HK_SHAPE_MULTI_SPHERE)
{
    for (int i = 0; i < count; ++i)
        m_spheres[i] = spheres[i];
    m_numSpheres = count;
}
