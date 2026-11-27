// hkgpConvexHull::BuildConfig::BuildConfig() (Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHull.cpp):
// the default build options. hkgpConvexHullImpl's constructor (func_82D16868) has the same body inline.
#include "havok/hkgpConvexHull.h"

hkgpConvexHull::BuildConfig::BuildConfig()
    : m_allowLowerDimensions(false), m_minCosAngle(lbl_821344F4), m_setSourceIndices(false), m_buildIndices(true),
      m_buildMassProperties(false), m_sortInputs(true), m_internalInputs(false), m_unknownD(false)
{
}
