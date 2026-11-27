// hkgpConvexHull::hkgpConvexHull() (Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHull.cpp): allocates
// and constructs the implementation (hkgpConvexHullImpl's constructor, func_82D16868, is out of line).
#include "havok/hkgpConvexHullImpl.h"

hkgpConvexHull::hkgpConvexHull() : m_data(new hkgpConvexHullImpl), m_userData(HK_NULL), m_userObject(HK_NULL)
{
}
