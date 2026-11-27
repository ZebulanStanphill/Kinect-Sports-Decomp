#include "xdk/vectorintrinsics.h"

typedef struct Matrix3_82CEC308 {
    __vector4 col[3];
} Matrix3_82CEC308;

static __forceinline void Sub4(__vector4 *self, const __vector4 *v)
{
    *self = __vsubfp(*self, *v);
}

void fn_82CEC308(Matrix3_82CEC308 *self, const Matrix3_82CEC308 *other)
{
    Sub4(&self->col[0], &other->col[0]);
    Sub4(&self->col[1], &other->col[1]);
    Sub4(&self->col[2], &other->col[2]);
}
