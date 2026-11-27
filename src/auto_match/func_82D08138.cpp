// Havok: builds an hkgpConvexHull of the vertices with m_allowLowerDimensions set and, when the build has a
// dimension, passes the hull with the second argument to fn_82D0CA60; the hull is a stack object.
#include "havok/hkgpConvexHull.h"

extern "C" {
int fn_82D0D888(hkgpConvexHull *self, const void *vertices, const hkgpConvexHull::BuildConfig &config);   // build
void fn_82D0CA60(hkgpConvexHull *self, int a, void *b);
}

extern "C" void fn_82D08138(const void *vertices, void *out)
{
    hkgpConvexHull hull;
    hkgpConvexHull::BuildConfig config;
    config.m_allowLowerDimensions = true;
    if (fn_82D0D888(&hull, vertices, config) != -1)
        fn_82D0CA60(&hull, 0, out);
}
