// hkgpConvexHull's scalar deleting destructor (slot 0 of ??_7hkgpConvexHull@@6B@). It calls hkgpConvexHull's destructor fn_82D0D640, which keeps its fn_ name, so it is written out under its own fn_ name.
#include "havok/hkgpConvexHull.h"

extern "C" {
void fn_82D0D640(hkgpConvexHull *self);   // hkgpConvexHull::~hkgpConvexHull
}

extern "C" hkgpConvexHull *fn_82D16800(hkgpConvexHull *self, unsigned int flags)
{
    fn_82D0D640(self);
    if (flags & 1)
        hkgpConvexHull::operator delete(self);
    return self;
}
