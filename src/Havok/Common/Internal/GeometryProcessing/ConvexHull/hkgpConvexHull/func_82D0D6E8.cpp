// hkgpConvexHull::hkgpConvexHull() (hkgpConvexHull.cpp). It keeps its fn_ name because Matching C units (fn_82D08138, fn_82D1BCD8) call it; the inline constructor is run with an explicit constructor call (MSVC accepts self->C::C()), which has no placement-new null check. hkgpConvexHullImpl's constructor fn_82D16868 also keeps its fn_ name.
#include "havok/hkgpConvexHullImpl.h"

extern "C" hkgpConvexHullImpl *fn_82D16868(hkgpConvexHullImpl *self);

static HK_FORCE_INLINE hkgpConvexHullImpl *newImpl()
{
    void *p = hkgpConvexHullImpl::operator new(sizeof(hkgpConvexHullImpl));
    return p ? fn_82D16868((hkgpConvexHullImpl *)p) : 0;
}

HK_FORCE_INLINE hkgpConvexHull::hkgpConvexHull() : m_data(newImpl()), m_userData(HK_NULL), m_userObject(HK_NULL)
{
}

extern "C" hkgpConvexHull *fn_82D0D6E8(hkgpConvexHull *self)
{
    self->hkgpConvexHull::hkgpConvexHull();
    return self;
}
