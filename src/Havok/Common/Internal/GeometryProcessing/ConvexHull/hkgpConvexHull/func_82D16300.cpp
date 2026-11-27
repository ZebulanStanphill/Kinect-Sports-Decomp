// hkgpConvexHullImpl::~hkgpConvexHullImpl() (Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHull.cpp):
// reset(false) (fn_82D14080), then the three arrays and the mesh, whose destructor is out of line (func_82D14010).
#include "havok/hkgpConvexHullImpl.h"

hkgpConvexHullImpl::~hkgpConvexHullImpl()
{
    reset(false);
}
