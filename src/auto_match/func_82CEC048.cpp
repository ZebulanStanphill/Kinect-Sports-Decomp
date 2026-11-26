// Havok hkMatrix3::isSymmetric: the matrix equals its transpose within epsilon.
#include "havok/hkMatrix3.h"

extern "C" hkBool fn_82CEBF80(const hkMatrix3 *self, const hkMatrix3 &other, float epsilon);

extern "C" bool fn_82CEC048(const hkMatrix3 *self, float epsilon)
{
    hkMatrix3 transposed;
    transposed._setTranspose(*self);
    return fn_82CEBF80(self, transposed, epsilon);
}
