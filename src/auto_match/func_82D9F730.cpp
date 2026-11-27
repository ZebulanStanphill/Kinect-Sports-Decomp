// hkpLinearParametricCurve::getEnd (slot +0x1C of ??_7hkpLinearParametricCurve@@6B@): the last point's index.
#include "havok/hkpLinearParametricCurve.h"

hkReal hkpLinearParametricCurve::getEnd()
{
    return (hkReal)(m_points.getSize() - 1);
}
