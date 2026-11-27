// hkgpMesh: rebuilds the mesh's convex hull. The old hull is deleted; with more than three vertices a new
// hkgpConvexHull is built from the mesh points (fn_82D201C0) without indices and with mass properties, and kept
// only when it is three-dimensional. Returns 0 when the hull was dropped. Keeps its fn_ name.
#include "havok/hkgpMesh.h"
#include "havok/hkgpConvexHull.h"

extern "C" {
void fn_82D201C0(hkgpMesh *self, hkArray<hkVector4> &points);   // the mesh's vertex positions
void fn_82D0D850(hkgpConvexHull *hull, const hkVector4 *points, int numPoints,
                 const hkgpConvexHull::BuildConfig &config);   // build
int fn_82D0B1D8(const hkgpConvexHull *hull);                    // getDimensions
}

extern "C" int fn_82D21590(hkgpMesh *self)
{
    delete self->m_convexHull;
    self->m_convexHull = HK_NULL;
    if (self->m_vertices.m_numUsed > 3) {
        hkgpConvexHull::BuildConfig config;
        config.m_buildIndices = false;
        config.m_buildMassProperties = true;
        self->m_convexHull = new hkgpConvexHull;
        hkArray<hkVector4> points;
        fn_82D201C0(self, points);
        fn_82D0D850(self->m_convexHull, points.m_data, points.m_size, config);
        if (fn_82D0B1D8(self->m_convexHull) != 3) {
            delete self->m_convexHull;
            self->m_convexHull = HK_NULL;
            return 0;
        }
    }
    return 1;
}
