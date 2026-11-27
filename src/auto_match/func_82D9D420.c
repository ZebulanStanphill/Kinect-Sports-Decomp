/* Havok: zero 3x3 matrix getter (the object is not read); the columns are hkVector4::setZero4 (vxor of an
   uninitialised local). */

#include "xdk/vectorintrinsics.h"

typedef struct Matrix3_82D9D420 {
    __vector4 col[3];
} Matrix3_82D9D420;

void fn_82D9D420(void *self, Matrix3_82D9D420 *m)
{
    __vector4 zero;
    zero = __vxor(zero, zero);
    m->col[0] = zero;
    m->col[1] = zero;
    m->col[2] = zero;
}
