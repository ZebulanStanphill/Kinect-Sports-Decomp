// Whether the bottom row of a 4x4 matrix is (0, 0, 0, 1) in x, y and z (hkMatrix4::isAffineTransformation,
// Common/Base/Math/Matrix/hkMatrix4.cpp, probably); the matrix is written as an explicit parameter.
#include "havok/hkMatrix4.h"

extern "C" int fn_82D06AA0(const hkMatrix4 *m)
{
    hkVector4 row3;
    row3.set(m->m_col0(3), m->m_col1(3), m->m_col2(3), m->m_col3(3));
    hkVector4 c;
    c.set(0.0f, 0.0f, 0.0f, 1.0f);
    return row3.equals3(c, 0.0f);
}
