// Havok: builds an hkgpConvexHull from the vertices with m_allowLowerDimensions set; when it has a dimension,
// runs three operations on it with the two other arguments. The hull is a stack object.
#include "havok/hkgpConvexHull.h"

extern "C" {
int fn_82D0D888(hkgpConvexHull *self, const void *vertices, const hkgpConvexHull::BuildConfig &config);   // build
void fn_82D0CA60(hkgpConvexHull *self, int a, void *b);
void fn_82D0D120(hkgpConvexHull *self, float x, int a);
void fn_82D0C860(hkgpConvexHull *self, void *c);
}

extern "C" void fn_82D081B8(const void *vertices, void *b, void *c)
{
    hkgpConvexHull hull;
    hkgpConvexHull::BuildConfig config;
    config.m_allowLowerDimensions = true;
    if (fn_82D0D888(&hull, vertices, config) != -1) {
        fn_82D0CA60(&hull, 0, b);
        fn_82D0D120(&hull, lbl_821344F4, 0);
        fn_82D0C860(&hull, c);
    }
}
