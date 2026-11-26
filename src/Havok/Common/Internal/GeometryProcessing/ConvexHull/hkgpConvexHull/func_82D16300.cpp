// hkgpConvexHullImpl's destructor (Common/Internal/GeometryProcessing/ConvexHull), keeping its fn_ name:
// reset(false) (fn_82D14080), then the three arrays and the mesh, whose destructor is out of line (fn_82D14010).
#include "havok/hkgpConvexHullImpl.h"

HK_FORCE_INLINE hkgpConvexHullImpl::~hkgpConvexHullImpl()
{
    reset(false);
}

extern "C" void fn_82D16300(hkgpConvexHullImpl *self)
{
    self->hkgpConvexHullImpl::~hkgpConvexHullImpl();
}
