// hkMatrix3::setMul(const hkMatrix3 &, const hkMatrix3 &) (Common/Base/Math/Matrix/hkMatrix3.cpp):
// this = a * b, column by column, last column first.
#include "havok/hkMatrix3.h"

void hkMatrix3::setMul(const hkMatrix3 &a, const hkMatrix3 &b)
{
    hkMatrix3 aa = a;
    for (int i = 2; i >= 0; i--) {
        getColumn(i)._setMul3(aa, b.getColumn(i));
    }
}
