#include "havok/hkpMultiSphereShape.h"
// The header declares the constructor; it is defined here, HK_FORCE_INLINE.
HK_FORCE_INLINE hkpMultiSphereShape::hkpMultiSphereShape(const hkVector4 *spheres, int count)
    : hkpSphereRepShape(HK_SHAPE_MULTI_SPHERE)
{
    for (int i = 0; i < count; ++i)
        m_spheres[i] = spheres[i];
    m_numSpheres = count;
}

extern "C" hkpMultiSphereShape *fn_82D4C700(hkpMultiSphereShape *self, const hkVector4 *spheres, int count) { self->hkpMultiSphereShape::hkpMultiSphereShape(spheres,count); return self; }
