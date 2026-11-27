// hkpLinearParametricCurve::transformPoints (slot +0x30 of ??_7hkpLinearParametricCurve@@6B@).
#include "havok/hkTransform.h"
#include "havok/hkpLinearParametricCurve.h"

void hkpLinearParametricCurve::transformPoints(const hkTransform &transformation)
{
    const int n = m_points.getSize();
    for (int i = 0; i < n; i++) {
        m_points[i].setTransformedPos(transformation, m_points[i]);
    }
}
