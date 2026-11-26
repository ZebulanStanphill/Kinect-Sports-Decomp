// hkgpConvexHullImpl's constructor (Common/Internal/GeometryProcessing/ConvexHull), keeping its fn_ name
// (C units call it). Layout from its destructor fn_82D16300 and hkgpAbstractMesh's (fn_82D14010):
// a BuildConfig, the mesh at +0x10 (hkReferencedObject + two lists), three hkArrays, and a unique id
// taken from a global counter; the body then calls reset(false) (fn_82D14080).
#include "havok/hkgpConvexHullImpl.h"
extern "C" {
extern long lbl_8323B6AC;   // the id counter
long _InterlockedExchangeAdd(long *, long);
}

HK_FORCE_INLINE hkgpConvexHullImpl::hkgpConvexHullImpl()
{
    m_uid = _InterlockedExchangeAdd(&lbl_8323B6AC, 1);
    reset(false);
}

extern "C" hkgpConvexHullImpl *fn_82D16868(hkgpConvexHullImpl *self)
{
    self->hkgpConvexHullImpl::hkgpConvexHullImpl();
    return self;
}
