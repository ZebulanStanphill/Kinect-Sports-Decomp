// Havok hkMatrix3::isSymmetric: the matrix equals its transpose within epsilon.
// The transpose is hkMatrix3::_setTranspose, inline, in this element order.
#include "havok/hkMatrix3.h"

extern "C" hkBool fn_82CEBF80(const hkMatrix3 *self, const hkMatrix3 &other, float epsilon);

extern "C" bool fn_82CEC048(const hkMatrix3 *self, float epsilon)
{
    hkMatrix3 transposed;
    const hkMatrix3 &s = *self;

    transposed(0, 0) = s(0, 0);
    transposed(1, 1) = s(1, 1);
    transposed(2, 2) = s(2, 2);
    transposed(3, 0) = 0.0f;
    transposed(3, 1) = 0.0f;
    transposed(3, 2) = 0.0f;
    transposed(1, 0) = s(0, 1);
    transposed(0, 1) = s(1, 0);
    transposed(2, 0) = s(0, 2);
    transposed(0, 2) = s(2, 0);
    transposed(2, 1) = s(1, 2);
    transposed(1, 2) = s(2, 1);
    return fn_82CEBF80(self, transposed, epsilon);
}
