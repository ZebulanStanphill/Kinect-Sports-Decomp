// Havok: with at least four points, builds an hkgpConvexHull of the array's points with the default options
// and, when the build has a dimension, passes it with the second argument to fn_82D0C6B0 and returns 0;
// otherwise returns 1. The hull is a stack object.
#include "havok/hkgpConvexHull.h"
#include "havok/hkVector4.h"

extern "C" {
int fn_82D0DC58(hkgpConvexHull *self, const hkVector4 *points, int numPoints,
                const hkgpConvexHull::BuildConfig &config);   // build from points
void fn_82D0C6B0(hkgpConvexHull *self, int a, void *b);
}

extern "C" int fn_82D1BCD8(const hkArray<hkVector4> &points, void *out)
{
    if (points.getSize() >= 4) {
        hkgpConvexHull hull;
        const int numPoints = points.m_size;
        const hkVector4 *data = points.m_data;
        if (fn_82D0DC58(&hull, data, numPoints, hkgpConvexHull::BuildConfig()) != -1) {
            fn_82D0C6B0(&hull, 1, out);
            return 0;
        }
    }
    return 1;
}
