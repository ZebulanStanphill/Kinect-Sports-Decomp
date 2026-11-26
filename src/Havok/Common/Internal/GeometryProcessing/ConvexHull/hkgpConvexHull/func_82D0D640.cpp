// hkgpConvexHull::~hkgpConvexHull (Common/Internal/GeometryProcessing/
// ConvexHull/hkgpConvexHull.cpp): deletes the implementation (non-virtual,
// 0x1C0 bytes, out-of-line destructor fn_82D16300) and the user object.
// It keeps its fn_ name because a Matching C unit (fn_82D08138) calls it: the
// destructor is defined inline and expanded into an extern "C" definition.
// The implementation's destructor keeps its fn_ name too, so its delete is written
// out: the destructor call through that name, then the class's operator delete.
#include "havok/hkgpConvexHullImpl.h"

extern "C" void fn_82D16300(hkgpConvexHullImpl *self);   // hkgpConvexHullImpl::~hkgpConvexHullImpl

static HK_FORCE_INLINE void deleteImpl(hkgpConvexHullImpl *impl)
{
    if (impl) {
        fn_82D16300(impl);
        hkgpConvexHullImpl::operator delete(impl);
    }
}

HK_FORCE_INLINE hkgpConvexHull::~hkgpConvexHull()
{
    deleteImpl(m_data);
    delete m_userObject;
    m_userObject = HK_NULL;
}

extern "C" void fn_82D0D640(hkgpConvexHull *self)
{
    self->hkgpConvexHull::~hkgpConvexHull();
}
