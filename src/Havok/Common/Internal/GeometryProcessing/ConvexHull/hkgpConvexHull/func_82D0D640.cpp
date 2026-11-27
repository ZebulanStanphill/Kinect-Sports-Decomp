// hkgpConvexHull::~hkgpConvexHull() (Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHull.cpp): deletes
// the implementation (its destructor, func_82D16300, is out of line; 0x1C0 bytes through its class allocator) and
// the user object.
#include "havok/hkgpConvexHullImpl.h"

hkgpConvexHull::~hkgpConvexHull()
{
    delete m_data;
    delete m_userObject;
    m_userObject = HK_NULL;
}
