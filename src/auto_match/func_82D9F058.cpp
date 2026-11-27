// hkpLinearParametricCurve::getPoint (slot +0xC of ??_7hkpLinearParametricCurve@@6B@): interpolates between
// the two points around t (fn_82CECDD8 rounds t down to an int).
#include "havok/hkpLinearParametricCurve.h"

extern "C" int fn_82CECDD8(float);

void hkpLinearParametricCurve::getPoint(hkReal t, hkVector4 &pointOnCurve)
{
    int i;
    if (t < 0.0f) {
        i = 0;
    } else {
        i = fn_82CECDD8(t);
    }
    const hkReal frac = t - (hkReal)i;
    const int next = i + 1;
    if (next < m_points.getSize()) {
        pointOnCurve.setInterpolate4(m_points[i], m_points[next], frac);
    } else {
        pointOnCurve = m_points[i];
    }
}
