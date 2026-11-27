// hkpLinearParametricCurve::getLengthFromStart (slot +0x20 of ??_7hkpLinearParametricCurve@@6B@): the distance
// along the curve at t, interpolated in its segment (fn_82CECDD8 rounds t down to an int).
#include "havok/hkpLinearParametricCurve.h"

extern "C" int fn_82CECDD8(float value);

hkReal hkpLinearParametricCurve::getLengthFromStart(hkReal t)
{
    int index = fn_82CECDD8(t);
    hkReal delta;
    if (index >= m_points.getSize() - 1) {
        index = m_points.getSize() - 1;
        delta = m_distance[index] - m_distance[index - 1];
    } else {
        if (index < 0) {
            index = 0;
        }
        delta = m_distance[index + 1] - m_distance[index];
    }
    return (t - (hkReal)index) * delta + m_distance[index];
}
