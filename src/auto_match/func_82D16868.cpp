// hkgpConvexHullImpl::hkgpConvexHullImpl() (Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHull.cpp).
// Layout from its destructor func_82D16300 and hkgpAbstractMesh's (func_82D14010): a BuildConfig, the mesh at
// +0x10 (hkReferencedObject + two lists), three hkArrays, and a unique id taken from a global counter; the body
// then calls reset(false) (fn_82D14080). BuildConfig's constructor is defined in the same .cpp (func_82D0B0C0)
// and inlined here.
#include "havok/hkgpConvexHullImpl.h"
extern "C" {
extern long lbl_8323B6AC;   // the id counter
long _InterlockedExchangeAdd(long *, long);
}

HK_FORCE_INLINE hkgpConvexHull::BuildConfig::BuildConfig()
    : m_allowLowerDimensions(false), m_minCosAngle(lbl_821344F4), m_setSourceIndices(false), m_buildIndices(true),
      m_buildMassProperties(false), m_sortInputs(true), m_internalInputs(false), m_unknownD(false)
{
}

hkgpConvexHullImpl::hkgpConvexHullImpl()
{
    m_uid = _InterlockedExchangeAdd(&lbl_8323B6AC, 1);
    reset(false);
}
